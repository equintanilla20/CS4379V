#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

long long totalCost(vector<int>& costs, int k, int candidates) {
   //your code here
}

int main() {
    std::vector<int> costs;
    int sizeOfCosts;
    int k;
    int candidates;
    int element;
    
    std::cin >> sizeOfCosts;
    int i = 0;
    while (i<sizeOfCosts) {
        std::cin >> element;
        costs.push_back(element);
        i++;
    }
    std::cin >> k;
   std:: cin >> candidates;
    
    std::cout << totalCost(costs, k, candidates) << endl;


    return 0;
}