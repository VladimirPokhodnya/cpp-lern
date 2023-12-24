#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> names = {"Vasya", "Petya", "Fedya"};

  for (std::string name : names) {
    std::cout << name << " ";
  }
  std::cout << '\n';

  for (size_t i = 0; i != names.size(); ++i) {
    std::cout << names[i] << " ";
  }

  return 0;
}
