#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
const int MAX = 100001;
int nodes[MAX];

// Test Case: 5 7 1 2 3 2 3 3 3 4 3 5 3 2 5 4 1 5 2 2 1 5 1
// Test Case: 4 6 1 2 1 1 3 2 1 4 3 3 4 1 2 3 1 2 4 2

struct hash_pair {
    // Used to enable pairs in a set
    std::size_t operator()(std::pair<int, std::pair<int, int>> const &pair) const {
        return pair.second.first ^ pair.second.second;
    }
};

// Initialize list of n nodes
void initNodes(int n) {
    for (int i = 1; i <= n; i++) {
        nodes[i] = i;
    }
}

// Find root of node from graph
int root(int x) {
    while (nodes[x] != x) {
        nodes[x] = nodes[nodes[x]];
        x = nodes[x];
    }
    return x;
}

// Make union of two nodes that do not share root
void makeUnion(int x, int y) {
    int p = root(x);
    int q = root(y);
    if (p != q) nodes[x] = nodes[q];
    else return;
}

int findPath( int m, int n, std::pair<int, std::pair<int, int>> p[], std::set<std::pair<int, std::pair<int, int>>>& edgeSet, int type) {
    int x, y, code, edgeCount = 0;
    initNodes(n);   // Reset roots
    for (int i = 0; i < m; i++)  {
        x = p[i].second.first;
        y = p[i].second.second;
        code = p[i].first;
        if (root(x) != root(y) && (code == type || code == 3)) {
            makeUnion(x, y);
            // Save edges to set for later
            edgeSet.insert(p[i]);
            edgeCount++;
        }
    }
    return edgeCount;
}

int three_types(int m, int n, std::pair<int, std::pair<int, int>> p[]) {
    // 1. Use Kruskal's Algorithm to find a minimum spanning tree
    std::sort(p, p + m, std::greater<>());
    std::set<std::pair<int, std::pair<int, int>>> edgeSet;

    // 2. Find count and add edges to set based on type
    int menEdgeCount = findPath(m, n, p, edgeSet, 1);
    int womenEdgeCount = findPath(m, n, p, edgeSet, 2);

    // Return difference between total edges and unique edges needed to hit all 5 nodes
    if (menEdgeCount == womenEdgeCount) {
        return m - edgeSet.size();
    }

    return -1;
}

int main() {
    int n, m;
    std::cin >> n >> m; // input number of vertices and edges
    std::pair<int, std::pair<int, int>> p[MAX]; // array to store edges with their weights
    
    for (int i = 0; i < m; i++) {
        int u, v, w;
        std::cin >> u >> v >> w;
        p[i] = {w, {u, v}};
    }
    
    std::cout << three_types(m, n, p) << std::endl;
    return 0;
}