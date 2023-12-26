#include <iostream>
#include <vector>
int main() {
  size_t count;
  std::vector<int> guests;
  std::cin >> count;

  guests.reserve(count);

  for (size_t i = 0; i != count; ++i) {
    int x;
    std::cin >> x;
    guests.push_back(x);
  }

  for (size_t i = 0; i != count; ++i) {
    // int temp;
    std::cout << guests[i];
    if (i != count - 1) {
      std::cout << ' ';
    }
  }

  return 0;
}
