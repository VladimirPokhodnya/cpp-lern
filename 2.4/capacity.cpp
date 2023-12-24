
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> worlds;

  size_t worlds_count;
  std::cin >> worlds_count;

  worlds.reserve(worlds_count);

  std::cout << worlds.capacity();

  return 0;
}
