#include "logger.hpp"

using std::string;
using namespace events;

string kill_player::to_string() const {
  return std::to_string(killed) + " was killed " + std::to_string(killer);
}

string step_player::to_string() const {
  return std::to_string(player) + " step to " + char(direction);
}

string fail_step_player::to_string() const {
  return std::to_string(player) + " fail step to " + char(direction);
}

string raise_items_player::to_string() const {
  return std::to_string(player) + " raise " + items.to_string();
}

string use_knife::to_string() const {
  return std::to_string(player) + " use knife";
}