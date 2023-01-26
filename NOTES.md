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