#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isSafe (std::vector<std::vector<std::string>>& board, int x, int y, int n) {
    for (int row = 0; row < x; row++) {
        if (board[row][y] == "Q") {
            return false;
        }
    }

    int row = x;
    int col = y;
    while (row >= 0 && col >= 0) {
        if (board[row][col] == "Q") {
            return false;
        }
        row--;
        col--;
    }

    row = x;
    col = y;
    while (row >= 0 && col < n) {
        if (board[row][col] == "Q") {
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nQueen(std::vector<std::vector<std::string>>& board, int x, int n) {
    if (x >= n) return true;

    for (int col = 0; col < n; col++) {
        if (isSafe(board, x, col, n)) {
            board[x][col] = "Q";

            if (nQueen(board, x + 1, n)) {
                return true;
            }
        }

        board[x][col] = "."; // backtrack
    }
    return false;
}

int main() {
    int n = 4;

    std::vector<std::vector<std::string>> board(n, std::vector<std::string>(n, "."));

    if (nQueen(board, 0, 4)) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                std::cout << board[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}