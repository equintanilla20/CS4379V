#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// Test Case: 5 -4 -1 0 3 10
std::vector<int> sortedSquares(std::vector<int>& arr) {
    std::vector<int> response;

    for (int n : arr) {
        response.push_back(n * n);
    }
    
    std::sort(response.begin(), response.end());
    return response;
}

int main() {
    std::vector<int> vec;
    int size;
    int element;

    std::cin >> size;
    int k = 0;

    while(k < size) {
        std::cin >> element;
        vec.push_back(element);
        k++;
    }

    std::vector<int> sorted = sortedSquares(vec);
    
    for (int i = 0; i < size; i++) {
        if (i != 0) std::cout << " " << sorted[i];
        else std::cout << sorted[i];
    }

    return 0;
}