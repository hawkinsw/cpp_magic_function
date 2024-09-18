#include <cstdlib>
#include <ctime>
#include <iostream>
#include "magic.h"

int get_check(int max ) {
  time_t now{std::time(nullptr)};
  srand(now);
  return std::rand() % max;
}

int main() {

  int result = -1;
  do {

    int guess{};

    std::cout << "Enter your guess: ";
    std::cin >> guess;

    result = guess_and_check(guess);

    if (result == 0) {
      std::cout << "Yahoo! " << guess << " was the magic number!" << std::endl;
    } else if (result < 0) {
      std::cout << "We guessed too low.\n";
    } else {
      std::cout << "We guessed too high!\n";
    }
  } while (result != 0);
  return 0;
}
