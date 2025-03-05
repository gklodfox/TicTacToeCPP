#include "./HumanAgent.hpp"
#include <fmt/core.h>
#include <iostream>
#include <stdlib.h>
#include <string>

HumanAgent::HumanAgent(char playerTile) : playerTile(playerTile) {
  fmt::println("Creating {} agent!", playerTile);
}
Coordinates HumanAgent::getAction(Board currentBoard) {
  bool move_is_valid = false;
  std::string playerInput;
  Coordinates inputCoords;
  while (!move_is_valid) {
    fmt::print("Enter {} coords: ", this->playerTile);
    std::cin >> playerInput;
    Coordinates inputCoords = {static_cast<size_t>(playerInput[0] - 48),
                               static_cast<size_t>(playerInput[1] - 48)};
    if (currentBoard.getTile(inputCoords.x, inputCoords.y) ==
        TileState::EMPTY) {
      move_is_valid = true;
    }
  }

  return inputCoords;
}
