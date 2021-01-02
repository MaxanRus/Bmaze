#pragma once

#include <vector>
#include "utils.hpp"

namespace events {
struct event {};

struct kill_player : event {
  int killer;
  int killed;
};

struct step : event {
  int player;
  direction direction;
};

struct fail_step : event {
  int player;
  direction direction;
};

struct raise_items : event {
  int player;
  items items;
};
}

struct Logger {
  void push_back(events::event*);
  void merge(const Logger&);

  std::vector<events::event*> logs;
};
