#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int MAX = 100001;
int nodes[MAX];
int par1[MAX];
int par2[MAX];

// Test Case: 5 7 1 2 3 2 3 3 3 4 3 5 3 2 5 4 1 5 2 2 1 5 1
// Test Case: 4 6 1 2 1 1 3 2 1 4 3 3 4 1 2 3 1 2 4 2

void initNodes(int n) {
    for (int i = 1; i <= n; i++) {
        nodes[i] = i;
    }
}

int find(int x) {
    while(nodes[x] != x) {
        nodes[x] = nodes[nodes[x]];
        x = nodes[x];
    }
    return x;
}

void makeUnion(int x, int y) {
    int p = root(x);
    int q = root(y);
    nodes[x] = nodes[q];
    std::cout << "Adding: (" << p << ", " << q << ")";
}

int findMSTEdges(int m, int n, std::pair<int, std::pair<int, int>> p[], int type) {
    if (p[i] == type || p[i] == 3) {

    }
}

int three_types(int m, int n, std::pair<int, std::pair<int, int>> p[]) {
	sort(p, p + m, greater<pair<int, pair<int, int>>>());
    int cnt = 0, cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < m; i++) {
        if (p[i].first == 3 || ) {
            int a = p[i].second.first, b = p[i].second.second;
            int x = find1(a), y = find1(b);

            if (x != y) {
                cnt++;
                merge1(x, y);
            }

            x = find2(a), y = find2(b);

            if (x != y) {
                cnt++;
                merge2(x, y);
            }
        } else if (p[i].first == 2) {
            int a = p[i].second.first, b = p[i].second.second;
            int x = find2(a), y = find2(b);

            if (x != y) {
                cnt2++;
                merge2(x, y);
            }
        } else {
            int a = p[i].second.first, b = p[i].second.second;
            int x = find1(a), y = find1(b);

            if (x != y) {
                cnt1++;
                merge1(x, y);
            }
        }
    }

    if (cnt / 2 + cnt1 == n - 1 && cnt / 2 + cnt2 == n - 1) {
        return m - cnt / 2 - cnt1 - cnt2;
    } else {
        return -1;
    }
}

int main() {
    int n, m;
    std::cin >> n >> m; // input number of vertices and edges
    std::pair<int, std::pair<int, int>> p[MAX]; // array to store edges with their weights
    
    int val[n + 1] = {0}; //array to store values associated with vertices
    for (int i = 1; i <= n; i++) par1[i] = par2[i] = -1; //initializing parent arrays
    
    for (int i = 0; i < m; i++) {
        int u, v, w;
        std::cin >> u >> v >> w; //input edges and their weights
        p[i] = {w, {u, v}};
    }
    
    std::cout << three_types(m, n, p) << std::endl;
    return 0;
}