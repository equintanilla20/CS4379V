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
    