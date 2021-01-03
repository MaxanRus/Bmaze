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

void Engine::UseItem(Logger& logger, utils::items::type type_item) {
  Player player = players_[index_player_];
  switch (type_item) {
    case utils::items::type::KNIFE :
      KillPlayersInCeil(logger, player.GetPosition());
      break;
  }
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

void Engine::KillPlayersInCeil(Logger& logger, utils::ceil c) {
  logger.push_back(new events::use_knife(index_player_));
  for (size_t i = 0; i < players_.size(); ++i) {
    if (i == index_player_)
      continue;
    if (players_[i].GetPosition() == c) {
      // TODO death and move to cemetery
      logger.push_back(new events::kill_player(index_player_, i));
    }
  }
}

void Engine::KillPlayersInLine(utils::ceil, utils::direction) {
  // TODO
}
