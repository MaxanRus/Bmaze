#pragma once

#include "map.hpp"
#include "player.hpp"
#include "utils.hpp"
#include "logger.hpp"

#include <vector>

class Engine {
 public:
  Engine() = delete;
  Engine(size_t countPlayers, size_t width, size_t height) : map_(width, height), players_(countPlayers) {}
  Engine(const Engine&) = default;

  void StepPlayer(Logger&, utils::direction);
  void UseItem(Logger&, utils::items::type);
  void RandomEvents();
  void NextPlayer();
 private:
  void KillPlayersInCeil(Logger&, utils::ceil);
  void KillPlayersInLine(utils::ceil, utils::direction);

  Map map_;
  std::vector<Player> players_;
  size_t index_player_ = 0;
};
