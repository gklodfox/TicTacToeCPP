#include "./HumanAgent.hpp"
#include <fmt/core.h>
#include <iostream>
#include <string>
#include <stdlib.h>

HumanAgent::HumanAgent(char playerTile) : playerTile(playerTile) {
  fmt::println("Creating {} agent!", playerTile);
}
Coordinates HumanAgent::getAction(Board currentBoard) {
  std::string playerInput;
  fmt::print("Enter {} coords: ", this->playerTile);
  std::cin >> playerInput;
  Coordinates inputCoords = {(size_t) playerInput[0] - 48, (size_t) playerInput[1] - 48};

  return inputCoords;
}
