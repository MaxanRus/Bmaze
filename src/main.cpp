#include "engine.hpp"

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  Engine engine(1, 10, 10);
  Logger logger;

  bool end_game = false;
  while (!end_game) {
    char type;
    char direction;
    cin >> type >> direction;

    Logger current_logger;

    if (type == 's') {
      engine.StepPlayer(current_logger, utils::direction(direction));
    } else if (type == 'k') {
      engine.UseItem(current_logger, utils::items::KNIFE);
    }

    for (auto i: current_logger) {
      cout << i->to_string() << endl;
    }

    logger.insert(logger.begin(), current_logger.begin(), current_logger.end());

    engine.NextPlayer();
  }

  return 0;
}
