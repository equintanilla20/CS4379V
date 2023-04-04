#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Test Case: 9 2 3 4 2 3 6 8 4 5 5
// Test Case: 5 1 2 3 4 4 4

int getMedian(std::vector<int>& tempTransactions) {
    // Get Median
    size_t n = tempTransactions.size();

    if (tempTransactions.size() % 2 == 0) {
        return (tempTransactions[(n / 2) - 1] + tempTransactions[((n / 2) + 1) - 1]) / 2.0;
    }
    return tempTransactions[((n + 1) / 2) - 1];
}

int activityNotifications(std::vector<int> arr, int d) {
    int count = 0;
    std::vector<int> transactions;

    // Emplace first four transactions
    for (int i = 0; i < d; i++) {
        transactions.push_back(arr[i]);
    }

    for (size_t i = d; i < arr.size(); i++) {
        // Simulate sorted queue
        std::vector<int> tempTransactions(transactions.begin(), transactions.end());
        sort(tempTransactions.begin(), tempTransactions.end());
        int currentTransaction = arr[i];

        // If count alert if transaction
        // is 2 times greater than median
        if (getMedian(tempTransactions) * 2 > currentTransaction) {
            count++;
        }

        transactions.erase(transactions.begin());
        transactions.push_back(currentTransaction);
    }
    
    return count;
}

int main() {
    std::vector<int> expenditure;
    int size;
    int element;
    int d;

    std::cin >> size;
    int k = 0;
    while (k < size){
        std::cin >> element;
        expenditure.push_back(element);
        k++;
    }
    std::cin >> d;
    std::cout << activityNotifications(expenditure, d) << std::endl;  

    return 0;
}