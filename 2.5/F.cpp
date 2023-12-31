#include <iostream>
#include <string>
#include <vector>

int main() {

  size_t rows, cols, mine;
  std::cin >> rows >> cols >> mine;

  std::vector<std::vector<int>> board(rows + 2, std::vector<int>(cols + 2, 0));

  for (size_t i = 0; i < mine; i++) {
    size_t x, y;
    std::cin >> x >> y;
    board[x][y] = 9;

    board[x - 1][y + 1] += 1;
    board[x - 1][y] += 1;
    board[x - 1][y - 1] += 1;
    board[x][y + 1] += 1;
    board[x][y - 1] += 1;
    board[x + 1][y + 1] += 1;
    board[x + 1][y] += 1;
    board[x + 1][y - 1] += 1;
  }

  std::cout << std::endl;

  for (size_t i = 1; i < rows + 1; ++i) {
    for (size_t j = 1; j < cols + 1; ++j) {
      if (board[i][j] > 8) {
        std::cout << '*';
      } else {
        std::cout << board[i][j];
      }
      if (j < cols) {
        std::cout << ' ';
      }
    }
    std::cout << "\n";
  }

  return 0;
}
