#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>

int minimumEffortPath(std::vector<std::vector<int>>& heights) {
    int n = heights.size();
    int m = heights[0].size();
    std::vector<std::vector<int>> moves = {
        {0, 1},  // right
        {0, -1}, // left
        {1, 0},  // up
        {-1, 0}  // down
    };

    std::vector<std::vector<int>> effort(n, std::vector<int>(m, INT_MAX));
    auto compare = []( const std::vector<int>& a, const std::vector<int>& b){ return a[0] > b[0]; };

    // {distance, x, y}
    std::priority_queue<std::vector<int>, std::vector<std::vector<int>>, decltype(compare)> minheap(compare);
    std::vector<int> element = {0, 0, 0};

    minheap.push(element);

    while (!minheap.empty()) {
        std::vector<int> min = minheap.top();
        minheap.pop();
        int distance = min[0];
        int x = min[1], y = min[2];
        if (distance > effort[x][y]) continue;
        if (x == n - 1 && y == m - 1) {
            return distance;
        }
        for (int i = 0; i < moves.size(); i++) {
            int nextX = x + moves[i][0];
            int nextY = y + moves[i][1];
            if (0 <= nextX && nextX < n && 0 < nextY && nextY < m) {
                int newDistance = std::max(distance, abs(heights[nextX][nextY] - heights[x][y]));

                if (newDistance < effort[nextX][nextY]) {
                    effort[nextX][nextY] = newDistance;
                    element = {newDistance, nextX, nextY};
                    minheap.push(element);
                }
            }
        }
    }
    return 0;
}

int main() {
    std::vector<std::vector<int>> heights = {
        {1, 2, 2}, {3, 8, 2}, {5, 3, 5}
    };

    std::cout << "Answer: " << minimumEffortPath(heights) << std::endl;
    return 0;
}