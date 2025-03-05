#ifndef INCLUDE_AGENT_HPP_
#define INCLUDE_AGENT_HPP_

#include "./Board.hpp"
#include "./Coordinates.hpp"

class HumanAgent {
  char playerTile;
public:
  HumanAgent(char playerTile);
  Coordinates getAction(Board currentBoard);
};

#endif // !INCLUDE_AGENT_HPP_
