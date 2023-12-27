#include <iostream>
#include <vector>

int main() {
  std::vector<int> guests;
  size_t count = 0;
  std::cin >> count;

  guests.reserve(count);

  for (size_t i = 0; i < count; ++i) {
    int x;
    std::cin >> x;
    guests[x - 1] = i + 1;
  }

  for (size_t i = 0; i < count; ++i) {
    std::cout << guests[i];
    if (i != count - 1) {
      std::cout << ' ';
    }
  }

  return 0;
}
