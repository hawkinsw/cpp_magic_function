#include <config.h>

int guess_and_check(int guess) {
  int check = MAGIC_NUMBER;

  if (guess == check) {
    return 0;
  } else if (guess < check) { 
    return -1;
  }
  return 1;
}