#include <iostream>
#include <string>
#include <vector>

std::string Join(const std::vector<std::string> &tokens, char delimiter);

std::string Join(const std::vector<std::string> &tokens, char delimiter) {

  std::string res = "";
  for (size_t i = 0; i < tokens.size(); ++i) {
    res += tokens[i];
    if (i != tokens.size() - 1) {
      res += delimiter;
    }
  }

  return res;
}

int main() {
  std::string tmp = Join({"What", "is", "your", "name?"}, '_');
  std::cout << tmp;
  return 0;
}
