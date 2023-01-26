# CS4379
### Algorithm Performance I (01/19/2023)
- Important algorithms
    1. Palindrome
    2. Fizzbuzz
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