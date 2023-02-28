#include <iostream>
#include <map>
#include <vector>

using namespace std;
// Test Case: 5 1 1 1 1 1 3
// you can use a helper function here

int findTargetSumWays(std::vector<int>& arr, int target) {
   //your code here
}

int main() {
    int sizeOfArrays;
    int element;
    int number;
    std::vector<int> vec;
    std::cin >> sizeOfArrays;
    int i = 0;
    
    while(i < sizeOfArrays){
        std::cin >> element;
        vec.push_back(element);
        i++;
    }
    
    std::cin >> number;
    
    std::cout << findTargetSumWays(vec, number) << endl;
    
    return 0;
}