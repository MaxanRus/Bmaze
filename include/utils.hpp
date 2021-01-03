#pragma once

#include <cstddef>
#include <string>

namespace utils {
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
  items(size_t weapon) : weapon(weapon) {}

  std::string to_string() const;

  items& operator+=(const items&);
  items operator+(const items&);

  enum type {
    KNIFE, GUN
  };
};

enum direction : char {
  UP = 'u', RIGHT = 'r', DOWN = 'd', LEFT = 'l'
};
}