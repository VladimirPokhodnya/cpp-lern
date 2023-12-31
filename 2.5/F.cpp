#include <iostream>
#include <string>
#include <vector>

int main() {

  size_t rows, cols, mine;
  std::cin >> rows >> cols >> mine;

  std::vector<std::vector<int>> board(rows, std::vector<int>(cols, 0));

  for (size_t i = 0; i < mine; i++) {
    size_t x, y;
    std::cin >> x >> y;
    x--;
    y--;
    board[x][y] = 9;
    // board[x - 1][y - 1] += 1;
    // board[x - 1][y] += 1;
    // board[x - 1][y + 1] += 1;
    // board[x][y - 1] += 1;
    // board[x][y - 1] += 1;
    // board[x - 1][y] += 1;
    // board[x][y] += 1;
    // board[x][y - 1] += 1;
  }

  for (size_t i = 0; i < rows; ++i) {
    for (size_t j = 0; j < cols; ++j) {
      if (board[i][j] == 9) {
        std::cout << '*';
      } else {
        std::cout << board[i][j];
      }
      if (j < cols - 1) {
        std::cout << ' ';
      }
    }
    std::cout << "\n";
  }

  return 0;
}
