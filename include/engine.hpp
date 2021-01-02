#pragma once

#include "map.hpp"
#include "player.hpp"
#include "utils.hpp"
#include "loger.hpp"

#include <vector>

class Engine {
 public:
  Engine() = delete;
  Engine(size_t countPlayers, size_t width, size_t height) : map_(width, height), players_(countPlayers) {}
  Engine(const Engine&) = default;

  void StepPlayer(direction);
  void UseItem(items::type);
  void RandomEvents();
  void NextPlayer();
 private:
  void KillPlayersInCeil(ceil);
  void KillPlayersInLine(ceil, direction);

  Map map_;
  std::vector<Player> players_;
  size_t index_player_ = 0;
};
