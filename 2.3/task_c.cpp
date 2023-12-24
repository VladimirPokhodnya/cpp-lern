#include <iostream>

int main() {
  int number;

  int sig = 1;
  double ln2 = 0.;

  std::cin >> number;

  for (int i = 1; i <= number; i++) {
    ln2 += (double)sig / i;
    sig *= -1;
  }

  std::cout << ln2 << std::endl;

  return 0;
}
