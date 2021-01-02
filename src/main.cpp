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
    char direction;
    cin >> direction;

    Logger tmp;

    engine.StepPlayer(tmp, utils::direction(direction));
    engine.NextPlayer();
    for (auto i: tmp) {
      cout << i->to_string() << endl;
    }
    logger.insert(logger.begin(), tmp.begin(), tmp.end());
  }

  return 0;
}
