#include "engine.hpp"

void Engine::StepPlayer(Logger& l, utils::direction d) {
  Player& p = players_[index_player_];
  if (map_.IsWall(p.GetPosition(), d)) {
    l.push_back(new events::fail_step_player(index_player_, d));
  } else {
    l.push_back(new events::step_player(index_player_, d));
    p.Step(d);
  }
}

void Engine::UseItem(utils::items::type type_item) {
  // TODO
}

void Engine::RandomEvents() {
  // TODO
}

void Engine::NextPlayer() {
  if (index_player_ + 1 == players_.size())
    index_player_ = 0;
  else
    ++index_player_;
}

void Engine::KillPlayersInCeil(utils::ceil) {
  // TODO
}

void Engine::KillPlayersInLine(utils::ceil, utils::direction) {
  // TODO
}
