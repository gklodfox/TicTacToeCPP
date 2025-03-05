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
  Coordinates test_action = agent.getAction(board);
  fmt::println("X: {}\nY: {}", test_action.x, test_action.y);

  board.setTile(test_action.x, test_action.y, TileState::X);

  board.print();

  return 0;
}
