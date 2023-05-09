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
        - Queue that we can add and remove from both ends
    - Map
        - Key value pairs ordered by key
    - Set
        - Keys ordered by key
    - Vector
        - Upgraded array

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
    - 

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
    1. Adjacency Matrix - A 2D array where indices represent vertices and each entry at `(i, j)` will have 1 if an edge is present. (0 if not)
    2. Adjacency List - A list of lists where each list at index i represents all neighbors for a vertex i.

17. Graph Search
    - Methods for searching graphs

18. Topological Sort
    - A linear ordering of all its vertices such that if the graph G contains an edge `(u, v)` then u appears before v in the ordering.
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
    - One-to-All shortest path problem: Determine shortest path from a node s to all other nodes in the network.
    - Weights of the edges are referred to as costs.
    - Edge weights cannot be negative
    1. Maintain a table to track vertices, the shortest distance from starting node, and each node's previous vertex
    2. Set starting node distance to 0 and all other to infinity
    3. Maintain two lists, visited and unvisited.
    4. Beginning with the first node, calculate distance from first node to adjacent vertices. Update the shortest distance column of table. Mark starting node as visited, remove it from unvisited list.
    5. Visit the next node with the smallest known distance from the start vertex. 
    6. Update previous vertex and repeat steps 3-6, overwriting distances and previous verticies only if the new values are smaller.

23. Shortest Path
    - BFS generates the shortest ppath between two nodes in `O(V+E)` time.
    - If we want to know the shortest path between a single node to all other nodes, it is `O(V * (V + E))`

24. Bellan-Ford Algorithm
    - Gives shortest path but can handle negative edge weights
    - Both algorithms cannot have negative cycles
    - Bellman-Ford is not greedy.
    - Time complexity of `O(V * E)`, can be as bad as `O(V^3)` if `E = V^2`
    - Number of iterations needed == `V - 1`

25. Minimum Spanning Trees
    - A spanning tree is a tree within a connected graph such that every node can reach every other node. A tree is a subgraph with no cycles.
    - A MST is a spanning tree that has the least total cost when you sum all edges.
    - NO CYCLES allowed

26. Spanning Tree
    - A spanning tree is a tree within a connected graph such that every node can reach every other node. A tree is a subgraph with no cycles.

27. Prim's Algorithm
    - Looks like Dijkstra's Algorithm
    - Has a source node
    - Explores nodes based on edges we can reach
    - Greedy
    1. Create a list called visited.
    2. Choose any node to begin. Insert node into visited.
    3. Examine all adjacent vertices to this node.
    4. Choose smallest edge that connects to an unvisited node. Add this new node to the visited list.
    5. Choose the next smallest edge to an unvisited node from the visited nodes.
    6. Repeat

28. Kruskal's Algorithm
    - Explores edges instead of nodes
    - No starting node
    - MST can be disconnected and become connected as the algorithm executes.
    - Also greedy
    1. List all edges in ascending order.
    2. Beginning with the smallest edge, add the edge and the vertices it connects to the MST.
    3. Do not add an edge that creates a cycle in the MST

29. Union-Find
    - A union-find structure is a collection of disjoint sets
    - No element belongs to more than one set
    - Uses two operations
        1. Find()
        2. Join
    - Initially every vertex of a graph is in its own set when you begin joining them.
    - Each vertex has a "representative" root node.
    - When joining two sets, always choose the root of the smaller set to join to the root of the larger set.

30. Network Flow Algorithms
    - Take a simple network and calculate maximum flow
    - Be able to generate a residual graph and updated network
    - We want to push material from a source `s` to a sink `t`
    - Flow is the rate of material flowing through pipes
    - Each pipe has a capacity
    - Flow conservation: flow exiting cannot exceed flow entering a node

31. Ford-Fulkerson Method
    - `O(f * (V + E)) = O(E * f)`
    1. Push flow along any path in the graph
    2. Find another way you can push more flow through (if necessary, allow yourself to decrease the flow from some edges, as decreasing the flow on a particular edge may allow more flow overall).
        - This is called `augmenting a path` in the `residual network`
    3. Update your graph by augmenting the flow along the path which will incrementally increase the flow and repeat the process in step 2.
    4. When we can't find any other ways to push more flow through, we are finished

32. Hashing
    - Two main types of collision avoidance
    - Use a key to index directly into an array for `O(1)` access
    - Need a hash function to convert the key into an integer
    - Hash function necessities:
        - Commonly uses modulus
        - Must return number from `0...table size`
        - Must be efficiently computable in `O(1)` time
        - Should not waste space unnecessarily
            - Should use every index of the table
            - Load factor `λ = (# of keys / Table Size)`
        - Should minimize collisions (two keys hashing to the same index)
    - Loadfactor (λ)
        - `λ = number of possible keys / number of hash table slots`
        - As table fills, hashing becomes harder
        - `Size of hash table = keys / λ`
    - When hashing a string, be aware that although a char holds 128 values, only a small subset are commonly used.
        - We can then use a smaller base to save space.
    - Optimal Hash Function
        - Distributes keys as evenly as possible in a hash table
        - Simply Uniform Hashing
            - Maps each key to a fixed random number
            - The idealized gold standard
            - Simple to analyze
            - Can be closely approximated by best hash functions

33. Collisions
    - Collisions occur when two different keys hash to the same value
    - Two methods are collision resolution
        1. Separate Chaining: Use a dictionary data structure (such as a linked list) to store multiple items that hash to the same slot.
            - Put a linked listed at every entry of hash table
            - List is unordered
            - Performance degrades with length of chains
            - λ can be greater than 1
            - Search cost `O(λ)` for unsuccessful searches and `O(λ/2+1)` for successful
            - Optimal load factor is λ = 0, but between 1/2 and 1 is fast and makes good use of memory
        2. Closed Hashing (probing): Search for empty slots using a second hash function and store item in the first empty slot that is found

34. String Algorithms
    - Algorithms for matching and searching strings

35. String Matching (Sliding Window)
    - Most basic algorithm
    - Scan text using a window of a certain size
    - Typically the length `m` of the pattern but doesn't have to be
    - Each attempt takes the window and aligns the left edge with the text and compares it with the pattern
    - Each attempt is associated with a position `j` in the text where possible positions are `y_j...y_(j + m - 1)`
    - Keep shifting window till the pattern is matched or the end of string is reached
    - `O(n * m)`

36. Rabin-Karp Algorithm
    - Idea: Before spending a lot of time comparing characters for a match, do some pre-processing to eliminate locations that could not possibly match
    - If we could quickly eliminate most of the positions then we can run the naive algorithm with whats left
    - Eliminate enough to hopefully get `O(n)` runtime overall
    - Make a "fingerprint" using a hash function
    - It is more efficient to check whether the window contents LOOK SIMILAR to the pattern than to compare for the exact match
    - Compare hash of the pattern to hash of the window
    - Precomputing hashes is `O(m)` time and `O(1)` space.

37. DFA / Automata
    - Deterministic Finite Automata
    - A simple program that can either accept or reject input strings from languages

38. Knuth-Morris-Pratt (KMP) Matcher
    - Auxillary Array `π` is defined as follows
        - Given pattern P, `π[i]` is the largest integer smaller than `i` such that prefix `p_1...p_π[i]` is a suffix of `p_1...p_i`
        - That is: How many characters in the front of the pattern are the same as the characters at the back of the section of the pattern up to `i`

39. C++ Skills!
    - STL Associative COntainers
        1. Set: Collection of unique keys, sorted by keys
        2. Map: Collection of key-value pairs, sorted by keys, keys are unique
        3. Multiset: Collection of unique keys, sorted by keys
        4. Multimap: Collection of key-value pairs, sorted by keys, keys are unique
    - STL Unordered Associative Containers
        1. Unordered_set: Collection of unique keys, hashed by keys
        2. Unordered_map: Collection of key-value pairs, hashed by keys, keys are unique
        3. unordered_multiset: Collection of unique keys, hashed by keys
        4. Unordered_multimap: Collection of key-value pairs, hashed by keys
    - `auto`: Type inference. Useful in range based loops
    - Range based for loop
    - `nullptr`: Defined as `(void*)0`

40. Lambda Function
    - A method of executing an in-line function.
    - Structure: `[capture clause](parameters) -> return-type {method definition}`
        - `[]`: No variable to capture
        - `[&]`: capture all external variables by reference
        - `[=]`: capture all external variables by value
        - `[a, &b]`: capture a by value and b by reference
    - Example: `auto greet = [](){std::cout << "Hello world"; };`
    - Example: `auto add = [](int a, int b){std::cout << "Sum = " << a + b;};`
    - Example: `auto operation = [](int a, int b, std::string op) -> double {return a + b;};`

41. 7 Ways to Initialize a Vector
    1. `std::vector<int> vect;`
    2. `std::vector<int> vect(n, 10);`
    3. `std::vector<int> vect{10, 20, 30};`
    4. `int arr[] = {10, 20, 30}; int n = sizeof(arr) / sizeof(arr[0]); std::vector<int> vect(arr, arr + n);`
    5. `std::vector<int> vect1{10, 20, 30}; std::vector<int> vect2(vect1.begin(), vect1.end());`
    6. `std::vector<int> vect1(10); int value = 5; fill(vect1.begin(), vect1.end(), value);`
    7. `std::vector<int> vect(10); iota(vect.begin(), vect.end(), 1);`