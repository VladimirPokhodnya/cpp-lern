#include <iostream>

int getFebruary(int year) {

  int february;

  if (year % 400 == 0) {
    february = 29;
  } else if (year % 100 == 0) {
    february = 28;
  } else if (year % 4 == 0) {
    february = 29;
  } else {
    february = 28;
  }

  return february;
}

int main() {
  int year, month;

  int count[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  std::cin >> month >> year;

  if (month == 2) {
    count[1] = getFebruary(year);
  }

  std::cout << count[month - 1];

  return 0;
}