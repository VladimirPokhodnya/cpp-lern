#include <iostream>
#include <vector>

std::pair<size_t, size_t>
MatrixArgMax(const std::vector<std::vector<int>> &matrix);

int main() {
  const std::vector<std::vector<int>> matrix{
      {0, 3, 2, 4}, {2, 3, 5, 5}, {5, 1, 2, 3}};

  MatrixArgMax(matrix);

  return 0;
}

std::pair<size_t, size_t>
MatrixArgMax(const std::vector<std::vector<int>> &matrix) {

  std::pair<size_t, size_t> res = {0, 0};

  int max = matrix[0][0];
  for (size_t i = 0; i < matrix.size(); ++i) {
    for (size_t j = 0; j < matrix[i].size(); ++j) {
      if (max < matrix[i][j]) {
        res.first = i;
        res.second = j;
        max = matrix[i][j];
      }
    }
  }
  std::cout << res.first << ' ' << res.second;

  return res;
}