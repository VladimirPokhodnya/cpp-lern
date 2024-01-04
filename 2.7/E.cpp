#include <iostream>
#include <vector>

std::vector<std::vector<int>>
Transpose(const std::vector<std::vector<int>> &matrix);

std::vector<std::vector<int>>
Transpose(const std::vector<std::vector<int>> &matrix) {

  std::vector<std::vector<int>> res(matrix[0].size(),
                                    std::vector<int>(matrix.size(), 0));

  for (size_t i = 0; i < matrix.size(); i++) {
    for (size_t j = 0; j < matrix[i].size(); j++) {
      res[j][i] = matrix[i][j];
    }
  }

  return res;
}

int main() {

  std::vector<std::vector<int>> res;
  std::vector<std::vector<int>> matrix = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 1, 2, 4}};

  res = Transpose(matrix);
  for (auto &lines : res) {
    for (auto &rows : lines) {
      std::cout << rows;
    }
    std::cout << '\n';
  }
  /* code */

  return 0;
}
