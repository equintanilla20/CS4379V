#include <iostream>
#include <map>
#include <vector>

using namespace std;
// Test Case: 5 1 1 1 1 1 3
void calculate(vector<int>& arr, int target, int i, int sum, int &result) {
    // "i" walks through array of ints
    if (i == arr.size()) {
        // If "i" reaches the end of the array
        // check if the sum of the ints
        // equals the target
        if (sum == target) {
            // If yes, this is a successful sequence
            result++;
        }
    } else {
        // Check the next num as a addition
        calculate(arr, target, i+1, sum+arr[i], result);
        // Check the next num as a subtraction
        calculate(arr, target, i+1, sum-arr[i], result);
    }
}

int findTargetSumWays(vector<int>& arr, int target) {
    int result = 0;
    calculate(arr, target, 0, 0, result);
    return result;
}

int main() {
    int sizeOfArrays;
    int element;
    int number;
    std::vector<int> vec;
    std::cin >> sizeOfArrays;
    int i = 0;
    
    while (i < sizeOfArrays){
        std::cin >> element;
        vec.push_back(element);
        i++;
    }
    
    std::cin >> number;
    
    std::cout << findTargetSumWays(vec, number) << endl;
    
    return 0;
}