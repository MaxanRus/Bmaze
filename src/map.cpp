#include "map.hpp"

bool Map::IsWall(ceil, direction) {
    if (d == direction::UP)
        return horizontal_walls_[c];
    else if (d == direction::RIGHT)
        return vertical_walls_[{c.x + 1, c.y}];
    else if (d == direction::DOWN)
        return horizontal_walls_[{c.x, c.y + 1}];
    else
        return vertical_walls_[c];
}

items Map::RaiseItems() {
    // TODO
    return items();
}

void Map::PutItems(const items &) {
    // TODO
}

void Map::CreateWall(ceil, direction) {
    // TODO
}

void Map::DestroyWall(ceil, direction) {
    // TODO
}

void Map::generate() {
    // TODO
}
