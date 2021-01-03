#pragma once

#include "utils.hpp"

#include <map>

using std::map;

class Map {
 public:
  Map(size_t width, size_t height) : width_(width), height_(height) { generate(); }
  Map(const Map&) = default;

  bool IsWall(utils::ceil, utils::direction);
  void CreateWall(utils::ceil, utils::direction);
  void DestroyWall(utils::ceil, utils::direction);

  utils::items RaiseItems(utils::ceil);
  void PutItems(utils::ceil, const utils::items&);

  utils::ceil GetPositionMorgue();
 private:
  void generate();

  size_t width_;
  size_t height_;

  utils::ceil position_morgue_;
  map<utils::ceil, bool> horizontal_walls_;
  map<utils::ceil, bool> vertical_walls_;
  map<utils::ceil, utils::items> items_;
};
