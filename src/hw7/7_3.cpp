#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
// Test Case: 4 1 2 4 1 3 3
// Test Case: 9 17 12 10 2 7 2 11 20 8 3 4
long long totalCost(vector<int>& costs, int k, int candidates) {
    long long answer = 0;
    int i = 0;
    int j = costs.size() - 1;
    std::priority_queue<int, std::vector<int>, std::greater<int>> firstGroup;
    std::priority_queue<int, std::vector<int>, std::greater<int>> secondGroup;

    for (int hiringGroup = 0; hiringGroup < k; hiringGroup++) {

        while (firstGroup.size() < candidates && i <= j) {
            firstGroup.push(costs[i]);
            i++;
        }

        while (secondGroup.size() < candidates && i <= j) {
            secondGroup.push(costs[j]);
            j--;
        }

        if (firstGroup.empty()) {
            answer += secondGroup.top();
            secondGroup.pop();
        } else if (secondGroup.empty()) {
            answer += firstGroup.top();
            firstGroup.pop();
        } else if (firstGroup.top() <= secondGroup.top()) {
            answer += firstGroup.top();
            firstGroup.pop();
        } else {
            answer += secondGroup.top();
            secondGroup.pop();
        }
    }

    return answer;
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