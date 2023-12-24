#include <iostream>

void output(int number, int max) {

  int count = 1;

  for (int i = 1; i < number; i++) {
    std::cout << "   ";
    count++;
  }

  for (int i = 1; i <= max; i++) {
    if (count > 7) {
      std::cout << std::endl;
      count = 1;
    }
    std::printf("%2d", i);
    if (count != 7) {
      std::cout << ' ';
    }
    count++;
  }
}

int main() {
  int number, max;
  std::cin >> number >> max;

  output(number, max);
  std::cout << std::endl;

  return 0;
}