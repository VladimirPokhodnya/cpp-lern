#include <iostream>
#include <string>
#include <vector>

int main() {
  int arr[3];

  struct xy {
    int x;
    int y;
  } xy;

  std::vector<struct xy> coord;

  std::string data;
  std::getline(std::cin, data);

  // std::cout << "atoi(\"12 34\") = " << atoi("1234") << std::endl;
  // std::cout << "atoi(\"1234текст\") = " << atoi("1234текст") << std::endl;
  // std::cout << "atoi(\" \\n \\r 1234\") = " << atoi(" \n \r 1234") <<
  // std::endl; std::cout << "atoi(\"+1234\") = " << atoi("+1234") << std::endl;
  // std::cout << "atoi(\"-1234\") = " << atoi("-1234") << std::endl;
  // std::cout << "atoi(\"числа нет\") = " << atoi("числа нет") << std::endl;
  // std::cout << "atoi(\"  +1234 все вместе\") = " << atoi("  +1234 все
  // вместе")
  //           << std::endl;
  /* code */
  return 0;
}
