#pragma once

#include "utils.hpp"

#include <vector>
#include <string>

namespace events {
struct event {
  virtual std::string to_string() const = 0;
};

struct kill_player : event {
  kill_player(size_t killer, size_t killed) : killer(killer), killed(killed) {}
  std::string to_string() const override;

  size_t killer;
  size_t killed;
};

struct step_player : event {
  step_player(size_t player, utils::direction direction) : player(player), direction(direction) {}
  std::string to_string() const override;

  size_t player;
  utils::direction direction;
};

struct fail_step_player : event {
  fail_step_player(size_t player, utils::direction direction) : player(player), direction(direction) {}
  std::string to_string() const override;

  size_t player;
  utils::direction direction;
};

struct raise_items_player : event {
  raise_items_player(size_t player, utils::items items) : player(player), items(items) {}
  std::string to_string() const override;

  size_t player;
  utils::items items;
};

struct use_knife : event {
  use_knife(size_t player) : player(player) {}
  std::string to_string() const override;

  size_t player;
};
}

using Logger = std::vector<events::event*>;
