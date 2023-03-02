# CS4379
### Algorithm Performance I (01/19/2023)
- Important algorithms
    1. Palindrome
    2. Fizzbuzz
	3. Balanced parentheses (in some form) (postfix expression math)
	4. Reverse array
- Big-O
	- Algorithms are measures by correctness and efficiency. Time and space.
	- Used to describe the worst case efficiency.
		- Upper bound on how many operations an algorithm will take.
		- Operation is a single step (or line of code) of the algorithm
	- Big-O classes, (Best to worst)
		1. O(1): Constant
		2. O(log N): log time
		3. O(N): linear time
		4. O(N log(N)): quasi linear
		5. O(N^2): quadratic time
		6. O(2^N): exponential time
		7. O(N!): Factorial Time
- Time Complexity
	- Single while loop: O(N)
	- Two nested for loops: O(N^2)
		- Possible for O(N * M) if each for loop increments different arrays
- Space Complexity
	- We can use Big-O to describe the amount of _additional_ space "units" we use to solve a problem
	- Declaring primitive types is O(1)
	- When you start making data structures that depend on size of input, you'll have to keep track of usage
	- One dimentional arrays are N, three dimensional arrays are N^3
- Recursion
	- Stack: Every time a function is called, a stack frame is pushed onto the call stack. Adds to space compelexity.
	- Heap: Creating dynamic objects adds to the space complexity.
- Worst, Best, Average Case
	- Most of the time, 90%, we talk about worst case.
	- Big O, Big Omega, and Big Theta

### Algorithm Performance II (01/24/2023)
- Find a ICPC 3 person team
- David Bumble, Infosec podcast
- Linux Basics for Hackers
- Human Sorting
- Big O Formal Definition
    - Two functions, f and g
    - f is the function that represents the number of operations for our algorithm
    - g is some other function - example 3n^2
    - If we say f E O(g), we are saying that:
        - f(n) <= k * g(n) as n -> infinity given some positive constant k, starting at value of n
        - In other words f(1000) <= k * g(1000)
    - f being BIG O of g means that f is upper bounded by g
    - f being BIG O of g means that f grows no faster than g
    - b(n) = n^2
    - d(n) = 1000n
    - d(n) E O(b) for n >= 1000
    - b is not a tight upper bound of d.
    - There is a b(n)
- Big Theta Formal Definition
    - Only usable when the best case == worst case for an algorithm
    - Given functions f and g, saying f E Theta(g) is the same thing as k_1 g(n) <= 
- Big Omega Formal Definition
    - Given functions f and g, saying f E Omega(g) is the same thing as g E O(f)
    - f(n) >= k * g(n) as n -> infinity

### Data Structures (01/24/2023)
- Office hours after class at Supple 257
	- Talk to Kathia!!
- Competitive Coding
	- 3 most common problems
		1. Greedy Algorithms
		2. Dynamic Programming
		3. Graph Algorithms
	- Sign up and look for UVA(?). Guide coming.
- Motivation
	- Efficient algorithms often involve data structures as tools to solve a given problem
	- Optimal solution to many interview questions will often involve more advanced data structures.
	- Understand what to use when!
- Template class: Defines a function in terms of generic types (in c++). Template can be used with different types
- Abstract Data Structure: Pseudo code for a data structure so that any language can implement its functions.
- Vectors: See C++ documentation for entry
- Stacks: Last in first out
	- Monotonic stacks
		- Next Greater Element problem
		- `size_t`, take a look at unsigned int 8, 16, etc.
	- Balance Parentheses problem
- Queue / Dequeue: First in first out. Dequeue adds and removes from both ends
- Unordered
	- The key is the value but there can be multiple values. `key:value, value, value` `{5:5, 5, 5}`
	- Unordered Set
	- Unordered Map, Kattis Quick Brown Fox pangram problem
- Map

### Greedy Algorithms (2/2/2023)

### Dynamic Programming (2/7/2023)
- Write some pseudocode comments in Zybook exercises
- Zybook 3_1: Kathia used a map to hold the opening braces and compares that with the input to determine balance
- Dynamic Programming:
    - Useful for Optimization and Search algorithms
    - Optimal Structure
        - Constructed from optimal solutions of its subproblems.
        - If subproblems are overlapping dependning on recursive path, greedy algorithm won't work.
        - Greedy tries to generate a solution as fast as possible vs searching for the optimal solution
        - Depending on the problem, a fast solution may be OK.
        - Global and local min/max
            - Challenge: Avoid local mins or maxes. Greedy will pick locals
            - Dynamic programming is an efficiently exhaustive solution.
                - It will always generate the optimal solution. It may be slower.
    - How?
        1. Formulate sub problems
        2. Express solution recursively in terms of the subproblems
        3. Find the recurrence relation! Solve recursion without repeating the same subproblem twice
        4. Memoization: Write down solutions to subproblems for future processing.
    - Rocks example:
        - Bottom up solution
        - Square matrix to hold results
    - Graph problems are bottoms up - we start with the smallest element and move to the biggest.
### Guest Speaker: Sam (2/9/2023)

### Priority Queues and Heaps (2/14/2023)
- Over the next few lectures, pay attention to 15-20 C++ things that we need to know.
- Priority Queue is a wrapper over the heap ADT
- Functor - function operator. Third parameter of `priority_queue<int, std::vector<int>, std::greater<int>>`
- Priority Queue - Essential for graph problems
    - Complete binary tree - tries to arrange the tree in a balanced way
- STL Containers
    - array
    - vector
    - deque - double ended queue
    - forward_list - singly linked list
    - list - double linked list
- STL Associative Containers
    - Sorted data structures with fast search algorithms
    - Set 
    - Map
    - Multiset
    - Multimap
- STL Adapters
    - Wrap other containers
    - Stack
    - Queue
    - Priority Queue

### Sorting (2/16/2023)
- C++ things to know
    1. auto
        - type inference. made as a response to python in 2011.
        - Useful in range based for loops
    2. nullptr
    3. range based for loops
    4. lambda function
        - In line anonymous function.
        - `int even_count = count_of(nums.begin(), nums.end(), [](int num) {return num % 2 == 0});`
- Career Prep
    - Apply to 5 companies and follow through with interviews
- Sorting
    - Selection Sort
    - Insertion Sort
    - Quick Sort
- Divide & Conquer
    - Recursion trees
    - Recurrence relations

### <CLASS> (2/18/2023)

### Master Method / Fast Sorting (2/21/2023)
- Dynamic programming: Answers of a subproblem should already be computed as it runs.
- C++ Things to Know:
    - Smart Pointers
        1. `std::unique_ptr`
        2. `std::shared_pointer`
        3. `std::weak_ptr`
        4. `std::auto_ptr`
    - `decltype`: returns the declared type of an expression passed to it.
- Master Method
    - Recurrence Relationship: An equation that recursively defines a sequence where the next term is a function of the previous terms.
        - Fibonacci: `F_n = F_n-1 + F_n-2`
        - Tower of Hanoi: `F_n = 2F_n-1 + 1;`
    - Relation: `T(n) = a * T(n/b) + f(n^k)`
        - `a > 0`: How many recursive calls do we make at each instance
        - `b > 1`: By what multiplicative factor do we reduce the problem
        - `f(n)`: How much work is done at each instance with Big-O.
    - MergeSort
        - `a = 2`: We make 2 calls
        - `b = 2`: We cut the problem in half
        - `f(n) = O(n)`: We do O(n) work
        - `T(n) = 2 * T(n/2) + O(n)`
    - BinarySearch
        - `a = 1`
        - `b = 2`
        - `f(n) = O(1)`
        - `T(n) = T(n/2) + O(1)`
    - MATH BREAK
        - `log_b(a) = c` is true when `b^c = a`
        1. IF `log_b(a) < k`, THEN `T(N) E Θ(n^k)`
        2. IF `log_b(a) = k`, THEN `T(N) E Θ(n^k * log(n))`
        3. IF `log_b(a) > k`, THEN `T(N) E Θ(n^log_b(a))`
    - Counting Sort
        - AKA Bucket Sort
        - O, Θ, and Ω all = `O(n + k)`
    - Radix Sort

### Trees (2/23/2023)
- Homework review
- Midterm in 2 weeks!!!!
- C++ Things To Know
    - Seven ways to initialize a vector
        1. `vector<int> vec.push_back();`
        2. `vector<int> vect(n, 10);`
        3. `vector<int> vect{10, 20, 30};`
        4. `vector<int> vect{arr, arr + n};`
        5. `vectot<int> vect2(vect1.begin(), vec1.end());`
        6. `fill(vec1.begin(), vec1.end(), value);`
        7. `iota(arr, arr+5, 1);`
- Trees
    - Tree made of nodes
    - Each node has value(s)
    - Four functions of Binary Search Tree
        1. Insert - O(height of tree) time complexity.
        2. Find - O(h)
        3. Delete - Most difficult process
        4. Print
    - Very efficient.

### Working with Trees (2/28/2023)
- Career Prep
    - Get 5 hours of interview practice
    - How to Prepare for Coding Interviews - Sami's youtube
- Trees
    - Memorize how to do tree traversal
        1. Preorder: do something with node then look at left and right children
        2. In-order: look at left child, do something with node, look at right child
        3. Postorder: look at left and right children, do something with node
    - Naturally recursive
    - Breadth first vs depth first
- Data Compression
    - Encode letters based on frequency with mroe frequent letters receiving shorter codes, etc.
    - To decode, make a binary tree where the alphabet letters are leaves.
    - Greedy algorithm useful because the problem is optimal, there is only one answer.
    - Huffman code - optimal binary compression tree
        - Always pair the two lowest frequencies when building tree

### Self Leveling Trees, Intro to Graphs (3/2/2023)
- Mid-term next Thursday!
    - What were the main points of the lectures
    - This class is about O(N). Understand Big-O for data structures and basic algorithms.
    - Understand, pre order / post order traverse.
    - Review C++ concepts
    - If something should be known DEAD COLD, review it
    - If it was on a homework, understand it
    - Understand how to proceed with difficult topics like dynamic programming
        - Partially filled out dynamic programming table: "Tell me what the most likely recurrence relation on this table"
        - Recurrence relations: Master Method
    - It will cover everything through Trees.
- Trees
    - Balancing a BST
        - Best Case O(1)
        - Worst Case O(n)
        - Average O(nlogn)
        - Allow dynamic insert and removal of O(logn)
        - Definition: Left and right subtree of every node has a height difference no greater than one
        - AVL Tree: Adelson-Velski Tree
            - When manipulating nodes, tree goes through rotations till the height is balanced
            - Pros:
                - All operations are O(logn)
                - Height balancing is constant to the speed of insert/delete
            - Cons:
                - DIfficult to program and debug
                - More space for height field
                - Asymptotically faster but balancing takes time
                - Bad for large data sets
    - B Trees
        - Node can have more than one key and children
        - m-way tree.
    - Other trees:
        - Red-Black Trees
        - Splay Trees
#### END OF EXAM 1 CONTENT

- Graphs
    - Adjacent vertices
    - Adjacent edges
    - Degree of a vertex
        - Odd vertex
        - Even vertex
    - Path: Sequence of verticies such that each vertex is adjacent to the next
        - Length of path is number of edges
        - Circuit: starts and ends at the same vertex
        - A graph is connected if any two vertices can be joined by a path, otherwise disconnected
    - Components
    - Bridge: If edge is removed
    - All trees are graphs
    - Not all graphs are trees
        - Trees have no cycles
    - Adjacency Matrix
    - Adjacency List
    - Directed Graph
    - Leonhard Euler - Koenigsberg Bridge Problem
