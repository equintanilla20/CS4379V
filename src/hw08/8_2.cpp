#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;
// Test Case: 2 1 3 -2 2 1

std::vector<std::vector<int>> kClosest(std::vector<std::vector<int>>& points, int k) {
    // Create minimum priority queue with pairs of double and vector for each distance and point
    std::priority_queue<std::pair<double, std::vector<int>>, std::vector<std::pair<double, std::vector<int>>>, std::greater<>> pointQueue;
    std::vector<std::vector<int>> answer;
    double distance;
    
    // Caluclate distance from origin and push distance + point into queue
    for (std::vector<int> point : points) {
        pointQueue.push(std::make_pair(sqrt(pow(point[0], 2) + pow(point[1], 2)), point));
    }

    // Place k points from the top of the queue into the answer vector
    for (int i = 0; i < k; i++) {
        answer.push_back(pointQueue.top().second);
        pointQueue.pop();
    }

    return answer;
}

int main () {
    std::vector<std::vector<int>> vec;
    int size;
    int element;
    int k;
    
    std::cin >> size;

    for (size_t i = 0; i < size; i++) {
        std::vector<int> v;
        for (size_t j = 0; j < 2; j++) {
            std::cin >> element;
            v.push_back(element);
        }
        vec.push_back(v);
    }
    
    std::cin >> k;

    std::vector<std::vector<int>> ans = kClosest(vec, k);  

    std::cout << "{";
    for (size_t i = 0; i < ans.size(); i++) {
        std::cout << "{";
        for (size_t j = 0; j < ans[i].size(); j++) {
            if (j == (ans[i].size() - 1)) std::cout << ans[i][j] << "}";
            else std::cout << ans[i][j] << ",";
        }
        if (i != ans.size() - 1) std::cout << ",";
    }
    std::cout << "}";
    return 0;
}