#pragma once

#include "utils.hpp"

#include <map>

using std::map;

class Map {
 public:
  Map(size_t width, size_t height) : width_(width), height_(height) { generate(); }
  Map(const Map&) = default;

  bool IsWall(ceil, direction);
  void CreateWall(ceil, direction);
  void DestroyWall(ceil, direction);

  items RaiseItems();
  void PutItems(const items&);
 private:
  void generate();

  size_t width_;
  size_t height_;
  map<ceil, bool> horizontal_walls_;
  map<ceil, bool> vertical_walls_;
  map<ceil, items> items_;
};
