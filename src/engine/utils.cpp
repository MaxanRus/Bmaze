#include "engine/utils.hpp"

bool utils::ceil::operator<(const ceil& another) const {
  return x < another.x || (x == another.x && y < another.y);
}

bool utils::ceil::operator>(const ceil& another) const {
  return another < *this;
}

bool utils::ceil::operator<=(const ceil& another) const {
  return !(another < *this);
}

bool utils::ceil::operator>=(const ceil& another) const {
  return !(*this < another);
}

bool utils::ceil::operator==(const ceil& another) const {
  return !(*this < another || another < *this);
}

bool utils::ceil::operator!=(const ceil& another) const {
  return *this < another || another < *this;
}

std::string utils::items::to_string() const {
  return "(" + std::to_string(weapon) + " weapon" + ")";
}

utils::items& utils::items::operator+=(const utils::items& items) {
  weapon += items.weapon;
  return *this;
}

utils::items utils::items::operator+(const utils::items& items) {
  utils::items tmp(*this);
  tmp += items;
  return tmp;
}