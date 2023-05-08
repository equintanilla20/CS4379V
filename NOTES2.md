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
    - Big O notation:
        1. O(1) - Constant Time
        2. O(log(n)) - Logarithmic Time
        3. O(n) - Linear Time
        4. O(nlog(n)) - Linearithmic Time
        5. O(n^2) - Quadratic Time
        6. O(2^n) - Exponential Time
2. Basic data structures
    - Stack
        - All actions are O(1)
    - Queue
        - All actions are O(1)
    - Heap
        - Complete binary tree maintained through heapifying.
    - Trees
        - Insert and delete are O(log(n))
    - Dequeue
    - Map
    - Set
    - Vector
3. Greedy Algorithms
    - Find fastest solution but not always the correct one
    - Makes local optimal choice at a given step and moves forward to next step
4. Dynamic Programming
    - Find optimal solution always using overlapping sub problems
    - Considers all choices past and present when choosing the optimal answer
    - Forumlate problem through sub problems
    - Expression solution to the problem recursively in terms of sub problems
    - Find recurrence relation
    - Write down subproblem answers through memoization to be used and reused
5. Heaps and Sorting
    - Heaps are represented in C++ by the priority queue.
        - Can be made into min or max queue by using pqueue comparator function.
    - Selection Sort
        - NOT Stable
        - NOT Adaptive
        - In Place
        - Omega(n^2)
        - O(n^2)
    - Insertion Sort
        - Stable
        - Adaptive
        - In Place
        - Omega(n)
        - O(n^2)
    - Quick Sort
        - Not Stable
        - Not Adaptive
        - Not In Place
        - O(n^2)
        - Theta(nlogn)
    - Merge Sort
        - Divide and conquer
        - Theta(nlogn)
6. STL Priority Queue
7. Sort Properties
8. Quick Sort
9. Divide and Conquer
10. Master Theorem
    - `T(n) = a * T(n/b) + f(n)` OR
    - `T(n) = a * T(n/b) + O(n^k)`
    1. IF `log_b(a) < k` THEN `T(n) ∈ Θ(n^k)`
    2. IF `log_b(a) == k` THEN `T(n) ∈ Θ(n^k * log(n))`
    3. IF `log_b(a) > k` THEN `T(n) ∈ Θ(n^log_b(a))`
11. Radix Sort
    - Sort by the largest place value then next largest until all numbers are sorted properly
12. Trees
    - Trees are recursive
        - Tree Traversal
            1. Pre order
            2. In order
            3. Post order
    - Binary Tree
        - Each node has at most two children
13. Binary Search Tree
    - Each node with children has a value greater than the values of its left subtree and less than the values of its right sub tree
    - Used for map, set, and priority queues
    - Delete is hard. Need to make changes to maintain BST rules
    - Operations
        1. Search, add, and remove are O(1), Ω(n), Θ(log(n)). Space complexity is O(n) (stack frames)
14. AVL Tree
    - Self leveling tree
    - Tree height is O(log(n))
    - AVL Tree is a binary tree where the height of left and right subtrees of every node differs at most by 1
15. Graph Basics
    - Graphs are made of vertices and edges
    - Adjacent Vertices and two vertices that are joined by an edge
    - Adjacent edges are two edges that intersect at a vertex
    - The Degree of a vertex is the number of edges at that vertex
    - A path that starts and ends at the same vertex is called a CIRCUIT
    - A graph is CONNECTED if any two vertices can be joined by a path, otherwise it is DISCONNECTED
    - Connected parts of a disconnected graph are called COMPONENTS
    - A BRIDGE is an edge in a connected graph whose removal makes it disconnected.
    - Graphs can be directed where one may only travel in the direction of edges. Undirected means travel can go any way along an edge.
    - If a path leads away from a node and then can return back to the node without reusing edges, it is CYCLIC.
16. Adjacency List / Matrix
    - Two methods for representing graphs
    1. Adjacency Matrix - A 2D array where indices represent vertices and each entry at (i, j) will have 1 if an edge is present. (0 if not)
    2. Adjacency List - A list of lists where each list at index i represents all neighbors for a vertex i.
17. Graph Search
    - Methods for searching graphs
18. Topological Sort
    - A linear ordering of all its vertices such that if the graph G contains an edge (u, v) then u appears before v in the ordering.
    - A valid topological sort will have all pre-req nodes appear before the nodes that depend on those pre-reqs
19. Breadth-First Search (BFS)
    - Uses a queue
    - From a starting node, check all the reachable adjacent nodes, once all these nodes are found, mark the starting node as finished then pop it from the queue and repeat with the next front node until all nodes are reached. Keep track of unvisited, visited, and finished nodes. 
    - This method moves level by level through a graph.
    - Used for finding shortest path
20. Depth-First Search (Backtracking)
    - Recursive
    - Use a stack and move down nodes until a dead end is reached. Pop nodes off the stack until a node has another adjacent node then move down that path. Repeat until all nodes are visited.
    - Can backtrack
21. Weighted Graphs
    - Used to represent real world situations like distances between cities, length of roads, server latencies, etc.
    - Dijkstra's Algorithm finds the shortest path give a weighted graph with non-negative edge weights
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