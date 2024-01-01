#include <iostream>
#include <string>
#include <vector>

std::string CommonPrefix(const std::vector<std::string> &words);

int main() {
  const std::vector<std::string> word(
      {"apple", "apricot", "application", "ap"});

  std::string res = CommonPrefix(word);

  std::cout << res << '\n' << "len = " << res.size();
  return 0;
}

std::string CommonPrefix(const std::vector<std::string> &words) {

  std::string res = "";

  if (words.size() == 0) {
    return res;
  }

  size_t min = 0;
  for (size_t i = 1; i < words.size(); ++i) {
    if (words[i] < words[min]) {
      min = i;
    }
  }

  for (size_t j = 0; j < words[min].size(); ++j) {
    for (size_t i = 0; i < words.size(); ++i) {
      if (i != min) {
        if (words[i][j] != words[min][j]) {
          return res;
        }
      }
      if (i == words.size() - 1) {
        res += words[i][j];
      }
    }
  }

  return res;
}