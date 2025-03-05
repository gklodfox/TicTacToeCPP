#include <fmt/core.h>
#include "./Game.hpp"
#include "./GameState.hpp"

Game::Game(HumanAgent agent_x, HumanAgent agent_y)
    : agent_x(agent_x), agent_y(agent_y) {}

void Game::start_game() {
  while (this->state != GameState::END) {
    fmt::println("Running game!");
  }
}
