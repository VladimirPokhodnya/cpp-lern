#include <bits/stdc++.h>
#include <iostream>

int main() {
  unsigned flag = 0;
  std::string res = "NO";
  std::string password;
  std::cin >> password;
  if (password.size() >= 8 && password.size() <= 14) {
    for (char const &c : password) {
      if (c >= 36 && c <= 126) {
        if (islower(c)) {
          flag |= 2;
        }
        if (isupper(c)) {
          flag |= 4;
        }
        if (isdigit(c)) {
          flag |= 8;
        }
        char const x = toupper(c);
        if (!(x >= 'A' && x <= 'Z') && !(x >= '0' && x <= '9')) {
          flag |= 16;
        }
      }
    }
  }
  if (std::bitset<32>(flag).count() >= 3) {
    res = "YES";
  }

  std::cout << res;

  return 0;
}
