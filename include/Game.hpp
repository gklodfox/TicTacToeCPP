#ifndef INCLUDE_GAME_HPP_
#define INCLUDE_GAME_HPP_

#include "./HumanAgent.hpp"
#include "./GameState.hpp"

class Game {
  GameState state;
  size_t turn = 0;
  HumanAgent agent_x;
  HumanAgent agent_o;
  Board board;

public:
  Game(HumanAgent agent_x, HumanAgent agent_o);
  void start_game();
};

#endif // INCLUDE_GAME_HPP_
