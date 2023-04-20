#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Test Case: 2 3 5 3 4 0 2 1 6 9 8 1 5 10 12 18 6 2 4 14 3

int getMinPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
    int n = grid.size();
    int m = grid[0].size();

    // Initialize table for dynamic programming results
    std::vector<std::vector<int>> table(n, std::vector<int>(m, 0));

    // Begin filling table from the bottom
    for (int i = 0; i < m; i++) {
        table[n - 1][i] = grid[n - 1][i];
    }

    for (int i = n - 2; i >= 0; i--) {
        // By row beginning with second from bottom
        for (int j = 0; j < m; j++) {
            // By column
            int currentCost = INT_MAX;
            for (int k = 0; k < m; k++) {
                // Find move cost based on min previous result and current result
                currentCost = std::min(currentCost, table[i + 1][k] + moveCost[grid[i][j]][k]);
            }
            // Add move cost to tile number into table
            table[i][j] = currentCost + grid[i][j];
        }
    }

    return *min_element(table[0].begin(), table[0].end());
}

int main() {
    int n;
    int m;
    int k;
    int element;
    std::vector<std::vector<int>> grid;
    std::vector<std::vector<int>> moveCost;
    
    std::cin >> k;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::vector<int> vec;
        for (int j=0; j<k; j++){
            cin>>element;
            vec.push_back(element);
        }
        grid.push_back(vec);
    }
    
    std::cin >> m;
    for (int i=0; i<m; i++) {
        std::vector<int> vec;
        for(int j = 0; j < k; j++){
            cin>>element;
            vec.push_back(element);
        }
        moveCost.push_back(vec);
    }
    
    std::cout << getMinPathCost(grid, moveCost) << std::endl;

    return 0;
}