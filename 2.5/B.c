#include <iostream>
#include <string>

int main() {

  const std::string condition1 = "aehiouw";

  std::string word;
  std::cin >> word;

  std::string result = "";
  result += word[0];

  for (size_t i = 1; i < word.size(); ++i) {
    if (condition1.find(word[i]) == std::string::npos) {
      switch (word[i]) {
      case 'b':
      case 'f':
      case 'p':
      case 'v':
        result += "1";
        break;
      case 'd':
      case 't':
        result += "3";
        break;
      case 'l':
        result += "4";
        break;
      case 'm':
      case 'n':
        result += "5";
        break;
      case 'r':
        result += "6";
        break;
      default:
        result += "2";
        break;
      }
    }
  }

  for (size_t i = 1; i < result.size(); ++i) {
    if (result[i - 1] == result[i]) {
      std::cout << result[i];
    }
  }

  std::cout << result;

  return 0;
}
