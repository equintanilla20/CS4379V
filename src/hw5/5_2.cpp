#include <iostream>
#include <vector>
#include <algorithm>

/*
    Given weights and profits of n items, and given a knapsack (container) of capacity 'W',
    we need to return the maximum profit such that the weights done not exceeds the Knapsack capacity.

    In other words:

    Given two integer arrays Profits[0..n-1] and weights[0..n-1] which represent profits and weights
    associated with n items respectively and given an integer Knapsack_Capacity 'W' we need to return
    the maximum profit which can be obtained.

    test input: 4 5 4 8 6 1 2 4 5 5
*/

int findMaxWeight(std::vector<int> profits, std::vector<int> weights, int n, int w) {
    // Matrix where rows correspond to weights in our knapsack
    // Columns corresponds to the weight capacity of the knapsack
    int table[n + 1][w + 1];
    int prevMax, currentMax, weight, remainingCap;

    // Base case of zero weights
    for (int row = 0; row < (w + 1); row++) {
        table[0][row] = 0;
    }

    // Base case of zero weight capacity
    for (int col = 0; col < (n + 1); col++) {
        table[col][0] = 0;
    }

    // Fill in the table
    for (int i = 1; i <= n; i++) {
        for (int capacity = 1; capacity <= w; capacity++) {
            currentMax = 0;
            // Save previous max profit for given capacity
            prevMax = table[i - 1][capacity];

            // Get weight of current weight
            weight = weights[i - 1];

            if (weight <= capacity) {
                // If there's room in the knapsack
                // Save current max based on the current weight's profit
                // value + the value of the same number of items
                // with the same remaining capacity in the table
                remainingCap = capacity - weight;
                currentMax = profits[i - 1] + table[i - 1][remainingCap];
            }
            // Save the max between the previous max and current max
            table[i][capacity] = std::max(prevMax, currentMax);
        }
    }

    // Value at this position in the table will be the overall max
    return table[n][w];
}

int main() {
    int sizeOfArrays, element, w;
    std::vector<int> profits;
    std::vector<int> weights;
    std::cin >> sizeOfArrays;
    int i = 0;

    while (i < sizeOfArrays) {
        std::cin >> element;
        profits.push_back(element);
        i++;
    }

    int j = 0;
    while (j < sizeOfArrays) {
        std::cin >> element;
        weights.push_back(element);
        j++;
    }

    std::cin >> w;

    std::cout << findMaxWeight(profits, weights, sizeOfArrays, w) << std::endl;

    return 0;
}

/*
    // Base Case, no weights or max weight is 0
    if (n == 0 || w == 0)
        return 0;
 
    // If weight of the nth item is more
    // than Knapsack capacity W, then
    // this item cannot be included
    // in the optimal solution
    if (weights[n - 1] > w)
        return findMaxWeight(profits, weights, n - 1, w);
 
    // Return the maximum of two cases:
    // (1) nth item included
    // (2) not included
    else
        return std::max(profits[n - 1] + findMaxWeight(profits, weights, n - 1, w - weights[n - 1]), findMaxWeight(profits, weights, n - 1, w));
*/