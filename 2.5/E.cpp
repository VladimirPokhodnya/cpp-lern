#include <algorithm>
#include <iostream>
#include <string>

int main() {

  std::string tmp;
  std::string str;
  std::getline(std::cin, str);

  for (size_t i = 0; i < str.length(); ++i) {
    str[i] = toupper(str[i]);
  }

  str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end());

  tmp = str;
  std::reverse(str.begin(), str.end());

  if (str == tmp) {
    // std::cout << str << ' ' << tmp;
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }

  return 0;
}
