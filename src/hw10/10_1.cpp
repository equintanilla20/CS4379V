#include <iostream>
#include <queue>
#include <vector>

using namespace std;
const int N = 5;
//your helper functions here (in case you have one)
bool solveMazeUtil(std::vector<std::vector<int>> & maze, int x, int y, int endX, int endY, std::vector<std::vector<int>>& sol) {
    // Goal reached, return true
    if (x == endX, y == endY && maze[x][y] == 0) {
        sol[x][y] = 1;
        return true;
    }

    // Check if location is valid
    if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1) {
        // If current location is part of solution, backtrack
        if (sol[x][y] == 1) return false;

        // Set as part of solution
        sol[x][y] = 1;

        // Check each direction
        if (solveMazeUtil(maze, x + 1, y, endX, endY, sol) == true)
            return true;
        if (solveMazeUtil(maze, x - 1, y, endX, endY, sol) == true)
            return true;
        if (solveMazeUtil(maze, x, y + 1, endX, endY, sol) == true)
            return true;
        if (solveMazeUtil(maze, x, y - 1, endX, endY, sol) == true)
            return true;
        
        // If none worked, remove current location from solution
        sol[x][y] = 0;
    }
    
    return false;
}

//function to know if the ball can stop at the destination
bool hasPath (std::vector<std::vector<int>>& grid, std::vector<int>& start, std::vector<int>& dest) {
    int startX = start[0], startY = start[1];
    int endX = dest[0], endY = dest[1];
    std::vector<std::vector<int>> sol(N, std::vector<int>(N, 0));
    return solveMazeUtil(grid, startX, startY, endX, endY, sol);
}

int main() {

    std::vector<std::vector<int> > grid = {
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0},
        {1, 1, 0, 1, 1},
        {0, 0, 0, 0, 0}
    };

    int rowStart = 0;
    int colStart = 4;
    int rowDest;
    int colDest;
    std::cin >> rowDest >> colDest;
    std::vector<int> start = {rowStart, colStart};
    std::vector<int> dest = {rowDest, colDest};
    std::cout << boolalpha << hasPath(grid, start, dest) << endl;
    return 0;
}