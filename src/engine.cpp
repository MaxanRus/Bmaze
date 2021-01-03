#include "engine.hpp"

void Engine::StepPlayer(Logger& l, utils::direction d) {
  // TODO reborn

  Player& p = players_[index_player_];
  if (map_.IsWall(p.GetPosition(), d)) {
    l.push_back(new events::fail_step_player(index_player_, d));
  } else {
    l.push_back(new events::step_player(index_player_, d));
    p.Step(d);
  }

  // TODO raise items
}

void Engine::UseItem(Logger& logger, utils::items::type type_item) {
  // TODO reborn and check more use knife

  Player player = players_[index_player_];
  switch (type_item) {
    case utils::items::type::KNIFE :
      KillPlayersInCeil(logger, player.GetPosition());
      break;
  }

  // TODO raise items
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
    Player& p = players_[i];
    if (!p.IsLive())
      continue;
    if (p.GetPosition() == c) {
      map_.PutItems(p.GetPosition(), p.GetItems());
      p.Die();
      p.Move(map_.GetPositionMorgue());
      logger.push_back(new events::kill_player(index_player_, i));
    }
  }
}

void Engine::KillPlayersInLine(utils::ceil, utils::direction) {
  // TODO
}
