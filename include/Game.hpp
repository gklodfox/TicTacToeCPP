#ifndef INCLUDE_GAME_HPP_
#define INCLUDE_GAME_HPP_

#include "./HumanAgent.hpp"
#include "./GameState.hpp"

class Game {
  GameState state;
  HumanAgent agent_x;
  HumanAgent agent_y;

public:
  Game(HumanAgent agent_x, HumanAgent agent_y);
  void start_game();
};

#endif // INCLUDE_GAME_HPP_
