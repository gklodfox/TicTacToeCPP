#include <fmt/base.h>

#include "./Board.hpp"
#include "./HumanAgent.hpp"
#include "./TileState.hpp"

int main(int argc, char *argv[]) {
  fmt::print("Hello from {}.", argv[0]);

  Board board;
  board.print();
  board.setTile(1, 2, TileState::X);
  board.print();
  if (board.getTile(1, 2) == TileState::X) {
    fmt::println("NICE");
  }

  HumanAgent agent('X');

  return 0;
}
