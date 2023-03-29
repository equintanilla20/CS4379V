#include <iostream>
#include <vector>

// C++ program to solve Rat in a Maze problem using
// Maze size
// #define N 4
const int N = 10; // must be const if using with an array!  

// A utility function to print solution matrix sol[N][N]
void printSolution(std::vector<std::vector<int>> sol) {
    for (std::vector<int> i:sol) {
        for (int j:i) {
            std::cout << " " << j << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
// A recursive utility function to solve Maze problem
bool solveMazeUtil(std::vector<std::vector<int>> & maze, int x, int y, std::vector<std::vector<int>> & sol) {
    // if (0, N-1 is goal) return true
    if (x == 9 && y == 0 && maze[x][y] == 1) {
        sol[x][y] = 1;
        return true;
    }
    // Check if maze[x][y] is valid
    if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1) {
        // Check if the current block is already part of
        // solution path.
        if (sol[x][y] == 1)
            return false;
        // mark x, y as part of solution path
        sol[x][y] = 1;
        printSolution(sol);
            
        /* Move forward in x direction */
        if (solveMazeUtil(maze, x + 1, y, sol) == true)
            return true;
        // If moving right didn't work
        // move left
        if (solveMazeUtil(maze, x - 1, y, sol) == true)
            return true;
        // If moving in x direction doesn't give solution
        // then Move down in y direction
        if (solveMazeUtil(maze, x, y + 1, sol) == true)
            return true;
        // If moving down didn't work
        // move up
        if (solveMazeUtil(maze, x, y - 1, sol) == true)
            return true;
        // If none of the above movements work then
        // BACKTRACK: unmark x, y as part of solution path
        sol[x][y] = 0;
        return false;
    }
    return false;
}


// Solves the Maze problem using Backtracking.
// It prints "Solution doesnt exist" if no path is possible, otherwise
// prints matrix showing a possible path using 1s.
bool solveMaze(std::vector<std::vector<int>> maze) {

    // make all cell unvisited
    int default_value = 0;

    // Using the fill constructor to initialize a two-dimensional vector sol
    // with a given default value
    std::vector<std::vector<int>> sol(N, std::vector<int>(N, default_value));

    if (solveMazeUtil(maze, 0, 9, sol) == false) {
        std::cout<<"Solution doesn't exist";
        return false;
    }
    std::cout << "Original Solution:" << std::endl;
    printSolution(sol);
    return true;
}

// driver program to test above function
int main() {

    // make all cell unvisited
    int default_value = 0;

    // Using the fill constructor to initialize a two-dimensional vector maze
    // with a given default value
    std::vector<std::vector<int>> maze =  
    {   { 1,0,0,0,0,0,1,1,1,1 },
        { 1,1,1,1,1,0,1,0,1,1 },
        { 1,1,1,0,1,0,1,1,1,1 },
        { 1,0,1,0,1,0,1,0,0,1 },
        { 1,0,1,0,1,0,1,0,1,1 },
        { 1,0,0,0,1,0,1,0,1,0 },
        { 1,0,1,1,1,0,1,0,1,0 },
        { 1,0,1,0,0,0,1,0,1,1 },
        { 0,1,1,1,1,1,1,0,1,1 },
        { 1,1,1,1,0,0,0,0,1,1 }                                            
    };

    solveMaze(maze);
    return 0;
}