#include <iostream>
#include <queue>

using namespace std;
// Test case: 3 2 4 3
// Test case: 1 5
// Test case: 4 1 8 3 5
int connectSticks(vector<int>& sticks) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    int cost = 0;

    // Fill min priority queue with vector values
    for (int i : sticks) {
        pq.push(i);
    }

    // While the pq has more than one item
    while (pq.size() > 1) {
        // Take the first two front values and add them
        int first = pq.top();
        pq.pop();

        int second = pq.top();
        pq.pop();

        // Save the sum as the cost and push it back to the queue
        cost += first + second;
        pq.push(first + second);
    }

    return cost;
}

int main() {
    int sizeOfArrays;
    int element;
    std::vector<int> array;
    std::cin >> sizeOfArrays;
    int i = 0;
    
    while (i < sizeOfArrays){
        std::cin >> element;
        array.push_back(element);
        i++;
    }
    
    std::cout << connectSticks(array) << std::endl;

    return 0;
}