#include <iostream>
#include <vector>
#include <algorithm>
#define INT_MAX 100

using namespace std;
// Test Case: 4 2 6 7 11 8
// Test Case: 5 30 11 23 4 20 5
// Test Case: 5 30 11 23 4 20 6

int minEatingSpeed(std::vector<int>& piles, int h) {
    std::sort(piles.begin(), piles.end());
    int low = 1;
    int high = piles[piles.size()-1];

    // Use binary search to find the minimum acceptable value of k
    while (low < high) {
        // Choose middle value
        int mid = (high - low) / 2 + low;
        double hours = 0;

        for (int i = 0; i < piles.size(); i++) {
            // Check to see how many hours it takes to
            // Finish all piles with k = mid treats per hour
            hours += (piles[i] + mid - 1) / mid;
        }

        if (hours <= h) {
            // If it isn't possible, check right half of possible values
            high = mid;
        } else {
            // If it isn't possible, check left half of possible values
            // For better minimum
            low = mid + 1;
        }
    }

    return low;
}

int main() {
    std::vector<int> piles;
    int sizeOfPiles;
    int element;
    int h;
    
    std::cin >> sizeOfPiles;
    int i = 0;
    while (i < sizeOfPiles) {
        std::cin >> element;
        piles.push_back(element);
        i++;
    }
    std::cin >> h;
    
    std::cout << minEatingSpeed(piles, h) << endl;

    return 0;
}