#include <iostream>
#include <string>

const int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

// Returns the number of bombs at the cells which are adjacent
// by knight moves to the given cell (x, y).
int count_bombs(const std::string board[8], int x, int y) {
  int count = 0;
  for (int i = 0; i < 8; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && board[nx][ny] == '*') {
      count++;
    }
  }
  return count;
}

int main() {
  std::string board[8];
  for (int i = 0; i < 8; i++) {
    std::cin >> board[i];
  }

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (board[i][j] == '.') {
        std::cout << count_bombs(board, i, j);
      } else {
        std::cout << board[i][j];
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
