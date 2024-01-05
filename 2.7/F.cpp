#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

int main() {

  size_t n;
  std::cin >> n;

  std::vector<std::pair<int, int>> cathetus(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> cathetus[i].first >> cathetus[i].second;
  }

  std::sort(cathetus.begin(), cathetus.end(),
            [](std::pair<int, int> f, std::pair<int, int> s) {
              return (f.first * f.first + f.second * f.second <
                      s.first * s.first + s.second * s.second);
            });

  for (auto &p : cathetus) {
    std::cout << p.first << " " << p.second << std::endl;
  }
}