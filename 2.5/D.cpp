#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> text;
  std::string str;

  while (std::getline(std::cin, str)) {
    text.push_back(str);
  }

  std::sort(text.begin(), text.end());
  std::reverse(text.begin(), text.end());

  for (std::string str : text) {
    std::cout << str << std::endl;
  }

  return 0;
}
