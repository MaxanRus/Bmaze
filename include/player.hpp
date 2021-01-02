#pragma once

#include "utils.hpp"

class Player {
 public:
  Player() : position_(), items_() {}
  Player(utils::ceil position, utils::items items) : position_(position), items_(items) {}
  Player(const Player&) = default;

  void Move(utils::ceil);
  void Step(utils::direction);
  void AddItems(const utils::items&);
  void UseItem(utils::items::type);

  utils::ceil GetPosition();
 private:
  utils::ceil position_;
  utils::items items_;
};
