#include <fmt/base.h>

#include "./Game.hpp"
#include "./HumanAgent.hpp"

int main(int argc, char *argv[]) {
  fmt::print("Hello from {}.", argv[0]);

  HumanAgent player_o('O');
  HumanAgent player_x('X');

  Game game(player_o, player_x);

  game.start_game();

  /*Board board;*/
  /*board.print();*/
  /*board.setTile(1, 2, TileState::X);*/
  /*board.print();*/
  /*if (board.getTile(1, 2) == TileState::X) {*/
  /*  fmt::println("NICE");*/
  /*}*/
  /**/
  /*HumanAgent agent('X');*/
  /*Coordinates test_action = agent.getAction(board);*/
  /*fmt::println("X: {}\nY: {}", test_action.x, test_action.y);*/
  /**/
  /*board.setTile(test_action.x, test_action.y, TileState::X);*/
  /**/
  /*board.print();*/

  return 0;
}
