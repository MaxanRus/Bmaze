#pragma once

#include "utils.hpp"

class Player {
 public:
  Player() : position_(), items_() {}
  Player(ceil position, items items) : position_(position), items_(items) {}
  Player(const Player&) = default;

  void Move(ceil);
  void Step(direction);
  void AddItems(const items&);
  void UseItem(items::type);
 private:
  ceil position_;
  items items_;
};
