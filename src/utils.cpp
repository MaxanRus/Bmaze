#include "utils.hpp"

bool ceil::operator<(const ceil& another) const {
  return x < another.x || (x == another.x && y < another.y);
}

bool ceil::operator>(const ceil& another) const {
  return another < *this;
}

bool ceil::operator<=(const ceil& another) const {
  return !(another < *this);
}

bool ceil::operator>=(const ceil& another) const {
  return !(*this < another);
}

bool ceil::operator==(const ceil& another) const {
  return !(*this < another || another < *this);
}

bool ceil::operator!=(const ceil& another) const {
  return *this < another || another < *this;
}
