#include <cassert>
#include <fmt/core.h>
#include <string>

#include "./Board.hpp"
#include "./TileState.hpp"

Board::Board() {
  size_t current_data_size = this->data.size();
  fmt::println("Current data size {}", current_data_size);
  if (current_data_size == 0) {
    for (size_t i = 0; i < this->COLS * this->ROWS; i++) {
      this->data.push_back(TileState::EMPTY);
    }
  }
  size_t after_data_size = this->data.size();
  fmt::println("Current data size {}", after_data_size);
  /*fmt::println("Current data{}", this->data);*/
}

void Board::print() {
  std::string result_string = "";
  for (size_t i = 0; i < this->data.size(); i++) {
    if (data[i] == TileState::EMPTY) {
      result_string += ".";
    } else if (data[i] == TileState::X) {
      result_string += "X";
    } else if (data[i] == TileState::O) {
      result_string += "O";
    }
    if ((i + 1) % 3 == 0) {
      result_string += '\n';
    }
  }
  fmt::println("{} ", result_string);
}

TileState Board::getTile(size_t idx) { return this->data[idx]; }
TileState Board::getTile(size_t x, size_t y) {
  assert(x < this->ROWS);
  assert(y < this->COLS);
  size_t idx = 3 * x + y;
  return this->getTile(idx);
}

void Board::setTile(size_t idx, TileState value) { this->data[idx] = value; }
void Board::setTile(size_t x, size_t y, TileState value) {
  assert(x < this->ROWS);
  assert(y < this->COLS);
  size_t idx = 3 * x + y;
  this->setTile(idx, value);
}

bool Board::isWon() {
  /*for (size_t i = 0; i < this->data.size(); i++) {*/
  /*  if (this->data[i] == TileState::EMPTY) return false;*/
  /*}*/
  if (data[0] == data[4] && data[0] == data[8] && data[0] != TileState::EMPTY)
    return true;
  if (data[2] == data[4] && data[2] == data[6] && data[2] != TileState::EMPTY)
    return true;

  if (data[0] == data[1] && data[0] == data[2] && data[0] != TileState::EMPTY)
    return true;
  if (data[3] == data[4] && data[3] == data[5] && data[3] != TileState::EMPTY)
    return true;
  if (data[6] == data[7] && data[6] == data[8] && data[6] != TileState::EMPTY)
    return true;

  if (data[0] == data[3] && data[0] == data[6] && data[0] != TileState::EMPTY)
    return true;
  if (data[1] == data[4] && data[1] == data[7] && data[1] != TileState::EMPTY)
    return true;
  if (data[2] == data[5] && data[2] == data[8] && data[2] != TileState::EMPTY)
    return true;

  return false;
}
