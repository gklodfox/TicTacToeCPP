#ifndef INCLUDE_BOARD_HPP_
#define INCLUDE_BOARD_HPP_

#include <vector>
#include "./TileState.hpp"

class Board {
  std::vector<TileState> data;
  size_t ROWS = 3, COLS = 3;
  TileState getTile(size_t idx);
  void setTile(size_t idx, TileState value);

public:
  Board();
  void print();
  TileState getTile(size_t x, size_t y);
  void setTile(size_t x, size_t y, TileState value);
};

#endif // INCLUDE_BOARD_HPP_
