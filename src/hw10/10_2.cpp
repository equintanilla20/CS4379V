#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Test Case: 4
// Test Case: 1

bool isSafe(std::vector<std::string>& board, int x, int y, int n) {
    // Check each row and column for possible queen to strike
    // Return true if queen is safe
    for (int row = 0; row < x; row++) {
        if (board[row][y] == 'Q') {
            return false;
        }
    }

    int row = x;
    int col = y;

    while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q') {
            return false;
        }
        row--;
        col--;
    }

    row = x;
    col = y;

    while (row >= 0 && col < n) {
        if (board[row][col] == 'Q') {
            return false;
        }
        row--;
        col++;
    }
    return true;
}

void nQueen(std::vector<std::vector<std::string>>& result, std::vector<std::string>& board, int x, int n) {
    if (x == n) {
        // If n queens are successfully placed, save answer to result vector
        result.push_back(board);
        return;
    }

    for (int col = 0; col < n; col++) {
        // Place queens and backtrack when one isn't safe
        if (isSafe(board, x, col, n)) {
            board[x][col] = 'Q';
            nQueen(result, board, x + 1, n);
            board[x][col] = '.'; // backtrack
        }
    }
}

std::vector<std::vector<std::string>> solveNQueens(int n) {
    // Build result and board vectors
    std::vector<std::vector<std::string>> result;
    std::vector<std::string> board(n);
    std::string row(n, '.');

    // Each row is a string of '.'
    for (int i = 0; i < n; i++) {
        board[i] = row;
    }

    // Get result
    nQueen(result, board, 0, n);

    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::vector<string>> res = solveNQueens(n);
    std::sort(res.begin(), res.end(), std::greater<std::vector<string>>());
    
    for (auto board : res) {
        for (auto row : board) {
            cout << row << " ";
        }
        std::cout << endl;
    }
    
    return 0;
}