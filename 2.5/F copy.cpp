#include <iostream>
#include <string>
#include <vector>

int main() {

  size_t m, n, k;

  struct xy {
    int x = 0;
    int y = 0;
  };

  std::cin >> m >> n >> k;

  std::vector<struct xy> coord;
  coord.reserve(k);
  for (size_t i = 0; i < k; i++) {
    std::cin >> coord[i].x >> coord[i].y;
  }

  return 0;
}
