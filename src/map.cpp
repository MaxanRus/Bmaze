#include "map.hpp"

bool Map::IsWall(utils::ceil c, utils::direction d) {
  switch (d) {
    case utils::direction::UP : return horizontal_walls_[c];
    case utils::direction::RIGHT : return vertical_walls_[{c.x + 1, c.y}];
    case utils::direction::DOWN : return horizontal_walls_[{c.x, c.y + 1}];
    case utils::direction::LEFT : return vertical_walls_[c];
  }
  return false;
}

utils::items Map::RaiseItems(utils::ceil c) {
  utils::items tmp = items_[c];
  items_[c] = utils::items();
  return tmp;
}

void Map::PutItems(utils::ceil c, const utils::items& i) {
  items_[c] += i;
}

void Map::CreateWall(utils::ceil c, utils::direction d) {
  // TODO
}

void Map::DestroyWall(utils::ceil c, utils::direction d) {
  // TODO
}

void Map::generate() {
  // TODO
}

utils::ceil Map::GetPositionMorgue() {
  return position_morgue_;
}
