#pragma once

#include <cstddef>

struct ceil {
  int x, y;

  ceil() = default;
  ceil(int x, int y) : x(x), y(y) {}
  ceil(const ceil&) = default;

  bool operator<(const ceil&) const;
  bool operator>(const ceil&) const;
  bool operator<=(const ceil&) const;
  bool operator>=(const ceil&) const;

  bool operator==(const ceil&) const;
  bool operator!=(const ceil&) const;
};

struct items {
  size_t weapon;

  items() : weapon(0) {}

  enum type {
    GUN
  };
};

enum direction {
  UP, RIGHT, DOWN, LEFT
};
