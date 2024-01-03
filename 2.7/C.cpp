#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> Split(const std::string &str, char delimiter);

std::vector<std::string> Split(const std::string &str, char delimiter) {

  size_t len = 1;
  for (size_t i = 0; i < str.size(); ++i) {
    if (str[i] == delimiter) {
      len++;
    }
  }
  std::vector<std::string> res(len, "");
  size_t index = 0;

  for (auto &c : str) {
    if (c == delimiter) {
      index++;
      continue;
    }
    res[index] += c;
  }

  return res;
}

int main() {
  std::vector<std::string> tmp = Split("13-24--08-11-2014--", '-');

  for (auto &str : tmp) {
    std::cout << str << std::endl;
  }

  return 0;
}
