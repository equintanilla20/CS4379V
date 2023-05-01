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
- Write notes from slides

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

### Network Flow (4/4/2023)
- This Thursday and next Thursday: Interview practice
    - Watch Google and Meta mock interview
    - Read open ended interview questions from slide link
    - "Tell me about yourself"
- Belman-Ford
    - Shortest path that allows negative edge weights
    - Find shortest path by constantly updating distance to each node till the target node is found.
- Network Flow
    - Flow rate from a source to a target
    - Capacity Constraint
    - Flow Conservation (in must equal out)
    - Assumptions:
        - Each vertex lies on some path from source to target
        - If there is an edge from u->v, v-> doesn't exist
        - All capacity weights are integers
- Ford-Fulkerson
    - Push flow along any path in the graph
    - Find another path with more flow
        - Finding `augmenting path` in `residual network`

### Interview Practice (4/06/2023)
- Interview Practice with Josh

### Hashing (4/11/2023)
- Basic Idea: Use a key to index a value directly into an array
- Must minimize collisions
    - Table size should be a prime number due to the cofactors of one and itself
    - Folding
    - Mid square
    - Are all hashed keys likely to be seen? Answer might be "no"
    - Horner's Rule: Efficient algorithm for computing polynomials
- Best hash function to distribute keys evenly as possible in the table:
    - "Simple Uniform Hashing"
- Separate Chaining
- Closed Hashing (or linear probing)
- λ (load factor) = `number of keys / table size`
- On a base level, if we need to make a table, make the size twice the number of keys we might potentially put in
    - This allows any of the hashing techniques to efficiently place values
- When `0 < λ < 1/2`, technique is efficienty. When `λ > 1/2` performance degrades. `λ = 0` is optimal
- Lazy Deletion:
    - When deleting, place a `#` symbol to indicate a value was deleted
    - Squished Pigeon Principle
- Rehashing
    - When an insertion fails
    - When `λ == 1/2`
    - Cost: O(n)

### Interview Practice 3 (4/03/2023)

### Bloom Filter / String Algorithms (4/18/2023)
- Ask about LinkedIn discord channel
- String Matching / Searching Algorithms
- Rabin-Karp Algorithm
    - Do some preprocessing to limit the total number of attempts
    - Fingerprint idea
        - Precompute a hash of the pattern and compare with a hash of the window
    - Desirable Hash Function
    - Bayesian Probability
    - If hashes match, then compare character by character
- Finite Automaton
    - Deterministic Finite Automaton (State machine)
    - How to generate Σ*
        - B = Σ U {ε}
        - F = {concat}
        - DFA does not accept the empty set: {ε} if there are any accepting states

### String Algorithms (4/20/2023)
- Knuth-Morris-Pratt String Search Algorithm
    - WATCH A YOUTUBE VIDEO
    - Concept of `Suffix` and `Prefix`
    - Pi table

### Class Cancelled (4/25/2023)

### Class Review (4/27/2023)
- FINAL EXAM
    - Comprehensive but focused on second half material
    - May 9th, TUESDAY, 11:00AM to 1:30PM, normal classroom
1. Algorithm Performance
2. Basic data structures
3. Greedy Algorithms
4. Dynamic Programming
5. Heaps and Sorting
6. STL Priority Queue
7. Sort Properties
8. Quick Sort
9. Divide and Conquer
10. Master Theorem
11. Radix Sirt
12. Trees
13. Binary Search Tree
14. AVL Tree
15. Graph Basics
16. Adjacency List / Matrix
17. Graph Search
18. Topological Sort
19. Breadth-First Search (BFS)
20. Depth-First Search (Backtracking)
21. Weighted Graphs
22. Dijkstra's Algorithm
23. Shortest Path
24. Bellan-Ford Algorithm
25. Minimum Spanning Trees
26. Spanning Tree
27. Prim's Algorithm
28. Kruskal's Algorithm
29. Union-Find
30. Network Flow Algorithms
31. Ford-Fulkerson Method
32. Hashing
33. Collisions
34. String Algorithms
35. String Matching (Sliding Window)
36. Rabin-Karp Algorithm
37. DFA / Automata
38. Knuth-Morris-Pratt (KMP) Matcher
39. C++ Skills!
40. Lambda Function
41. 7 Ways to Initialize a Vector