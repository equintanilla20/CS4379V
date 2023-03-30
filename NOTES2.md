# CS4379
### Searching Graphs (03/21/2023)
- Graph searching:
    - Trying to find a node with a specific set of characteristics
- In trees: BFS = Queue, DFS = Stack iteratively or Stack Frame used recursively
- Smallest labeled neighbor: because prof says so!
- Matrices as graphs
    - A matrix is a graph
    - Knights Attack Problem - Research this!
- Directedness & Cyclicity
    - Directed graph has arrows
    - A cyclic graph has a loop (a path leading away from a node that returns back without reusing edges)
    - Directed Acyclic Graph - Useful for real world dependency graphs
- Topological Sort

### Searching, Backtracking, Weighted Graphs, Dijkstra's Algorithm (03/23/2023)

### Dykstra's Algorithm, Bellman-Ford (03/28/2023)
- Book: Antti Laaksonen - Guide to Competitive Programming
- BFS: Guaranteed to generate shortest path between two nodes
- Dykstra requires `non-negative edge weights`
- Bellman-Ford doesn't like `negative cycles`. Needs cycle detection.
- Dykstra
    - O(V^2). If using priority queue: O(V + E*logV)
- Graph Algorithms: WATCH YOUTUBE VIDEOS ON HOW THESE WORK
    - Dijkstra: Ch 15 in Zybook
    - Bellman-Ford
    - Floyd-Warshall
- Minimum Spanning Trees: Ch 13 in Zybook
- Union Find

### Bellman-Ford & Minimum Spanning Trees (3/30/2023)
- Do Leetcode: #1631, #743
- Timing Code: `#include <chrono>`, `auto start = std::chrono::steady_clock::now()`
- Minimum Spanning Tree
    - `https://visualgo.net/en/mst`
    - READ TAKEAWAYS FOR FINAL
    - Cut: How a graph is partitioned into two pieces
    - Prim's Algorithm: Uses minheap to find and track smallest edges
    - Kruskal's Algorithm
        - Union Find: Joining subgraphs together by a rule
        - Pick cheapest edges and connect subgraphs together
