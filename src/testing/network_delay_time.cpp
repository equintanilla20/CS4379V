#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>
#include <unordered_set>

int networkDelayTime(std::vector<std::vector<int>>& times, int n, int k) {
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> minheap;
    minheap.push(std::make_pair(0, k));
    std::vector<std::vector<std::pair<int, int>>> edges(n+1);
    std::unordered_set<int> visited;

    for (std::vector<int> time : times) {
        edges[time[0]].push_back(std::make_pair(time[1], time[2]));
    }

    int total = 0;

    while (!minheap.empty()) {
        std::pair<int, int> node = minheap.top();
        minheap.pop();

        if (!visited.count(node.second)) {
            visited.insert(node.second);
            total = std::max(total, node.first);

            for (std::pair<int, int> edge : edges[node.first]) {
                if (!visited.count(edge.first)) {
                    minheap.push(std::make_pair(node.first + edge.first, edge.second));
                }
            }
        }
    }

    if (visited.size() == n)
        return total;
    return -1;
}

int main() {
    int n = 4;
    int k = 2;
    std::vector<std::vector<int>> times = {{2, 1, 1}, {2, 3, 1}, {3, 4, 1}};
    std::cout << networkDelayTime(times, n, k) << std::endl;

    return 0;
}