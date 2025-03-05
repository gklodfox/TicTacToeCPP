#include <fmt/core.h>
#include "./HumanAgent.hpp"

HumanAgent::HumanAgent(char player_tile) : player_tile(player_tile) {fmt::println("Creating {} agent!", player_tile);}
