#include <iostream>
#include <vector>
#include <queue>
#include <numeric>

using namespace std;

// Test Case: 5 4 0 1 1 2 2 3 3 4
// Test Case: 5 3 0 1 1 2 3 4

int find(std::vector<int>& roots, int i) {
    // Find root of node
    while (roots[i] != i) {
        // Save roots 
        roots[i] = roots[roots[i]];     // Save current node's root
        i = roots[i];                   // Move up chain to find root
    }
    
    // Return index of root
    return i;
}

bool createUnion(std::vector<int>& roots, int i, int j) {
    // Union two nodes if they have the same root index
    if (i != j) {
        roots[i] = j;
        return 1;
    }
    return 0;
}

int numComponents(int n, std::vector<std::vector<int>>& edges) {
    // Use Union-Find to reduce count by connected sets
    std::vector<int> roots(n);
    std::iota(roots.begin(), roots.end(), 0);
    int count = n;

    for (size_t i = 0; i < edges.size(); i++) {
        int root1 = find(roots, edges[i][0]);
        int root2 = find(roots, edges[i][1]);
        count -= createUnion(roots, root1, root2);
    }

    return count;
}

int main() {
    int n;
    int size;
    int element;
    std::vector<std::vector<int>> edges;
    std::cin >> n;
    std::cin >> size;
    
    for (int i = 0; i < size; i++) {
        std::vector<int> vec;
        for(int j = 0; j < 2; j++){
            std::cin >> element;
            vec.push_back(element);
        }
        edges.push_back(vec);
    }

    std::cout << numComponents(n, edges) << std::endl;
    return 0;
}