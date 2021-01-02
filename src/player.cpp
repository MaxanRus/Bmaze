#include "player.hpp"

void Player::Move(utils::ceil c) {
  position_ = c;
}

void Player::Step(utils::direction d) {
  switch (d) {
    case utils::direction::UP : position_.y--; break;
    case utils::direction::RIGHT : position_.x++; break;
    case utils::direction::DOWN : position_.y++; break;
    case utils::direction::LEFT : position_.x--; break;
  }
}

void Player::AddItems(const utils::items& items) {
  items_ += items;
}

void Player::UseItem(utils::items::type) {
  // TODO
}
utils::ceil Player::GetPosition() {
  return position_;
}
