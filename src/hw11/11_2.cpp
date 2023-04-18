#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
const int MAX = 10001;
int nodes[MAX];

using namespace std;
// Test Case: 3 3 25 1 2 10 2 3 20 3 1 30
//your helper function here if you have one

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
    if (p != q) {
        nodes[x] = nodes[q];
    } else return;
}

int mrPresident(int n, int m, int z, vector<pair<int, pair<int, int>>> edges) {
    // 1. Use Kruskal's Algorithm to find a minimum spanning tree
    int x, y, cost, minimumCost = 0, count = n;
    std::vector<std::pair<int, std::pair<int, int>>> mst;
    std::sort(edges.begin(), edges.end(), std::greater<>());
    initNodes(n);
    for (int i = 0; i < edges.size(); i++)  {
        x = edges[i].second.first;
        y = edges[i].second.second;
        cost = edges[i].first;
        if (root(x) != root(y)) {
            minimumCost += cost;
            makeUnion(x, y);
            // 2. Save edges to mst vector for later
            mst.push_back(edges[i]);
        }
    }

    // 3. Sort mst vector in descending order
    std::sort(mst.begin(), mst.end());

    int i = 0;
    while (i < mst.size() && minimumCost > z) {
        // 4. If minimum cost is not below z, change cost to 1
        // 5. Decrement count of edges
        int temp = mst[i].first;
        mst[i].first = 1;
        count--;
        minimumCost -= temp - 1;
        i++;
    }
    
    if (minimumCost <= z) {
        return count;
    }

    return -1;
}

int main() {
    long long n, m, z;
    std::cin >> n >> m >> z;
    
    std::vector<std::pair<int, std::pair<int, int>>> edges;
    for (int i = 1; i <= m; i++) {
        int a, b, c;
        std::cin >> a >> b >> c;
        edges.push_back(std::make_pair(c, std::make_pair(a, b)));
    }
    
    std::cout << mrPresident(n, m, z, edges) << std::endl;

    return 0;
}