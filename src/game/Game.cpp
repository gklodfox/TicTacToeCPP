#include "./Game.hpp"
#include "./GameState.hpp"
#include <fmt/core.h>

Game::Game(HumanAgent agent_x, HumanAgent agent_o)
    : agent_x(agent_x), agent_o(agent_o), board(Board()) {}

void Game::start_game() {
  fmt::println("Running game!");
  while (!this->board.isWon()) {
    this->board.print();

    if (this->turn % 2) {
      Coordinates curr_action = this->agent_x.getAction(this->board);
      this->board.setTile(curr_action.x, curr_action.y, TileState::X);
    } else {
      Coordinates curr_action = this->agent_o.getAction(this->board);
      this->board.setTile(curr_action.x, curr_action.y, TileState::O);
    }

    this->turn++;
  }
}
