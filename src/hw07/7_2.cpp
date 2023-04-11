#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <unordered_set>

using namespace std;
// Test Case: 2 10 20 4 2 17 18 19 2
// Test Case: 3 20 30 10 7 19 13 26 4 25 11 21 2

int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
    std::sort(buses.begin(), buses.end());
    std::sort(passengers.begin(), passengers.end());
    std::queue<std::pair<int, int>> bq;
    int answer = passengers[0] - 1;

    for (int b : buses) {
        bq.push(std::make_pair(b, capacity));
    }

    int i = 0;
    while (bq.size() > 0) {
        while (bq.front().second > 0 && i < passengers.size() && passengers[i] <= bq.front().first) {
            // Fill buses with passengers as they depart/arrive respectively
            if (i > 0 && passengers[i] != passengers[i - 1] + 1) {
                answer = passengers[i] - 1;
            }
            i++;
            bq.front().second--;
        }

        // Check for empty seats and fill with answer
        if (bq.front().second > 0 && i > 0 && passengers[i - 1] != bq.front().first) {
            answer = bq.front().first;
        }
        bq.pop();
    }

    return answer;
}

int main() {
    std::vector<int> buses;
    std::vector<int> passengers;
    int sizeOfBuses;
    int sizeOfPassengers;
    int capacity;
    int element;
    
    std::cin >> sizeOfBuses;
    int i = 0;
    while (i < sizeOfBuses){
        std::cin >> element;
        buses.push_back(element);
        i++;
    }
    
    std::cin >> sizeOfPassengers;
    int j = 0;
    while (j < sizeOfPassengers){
        std::cin >> element;
        passengers.push_back(element);
        j++;
    }
    
    std::cin >> capacity;
    
    std::cout << latestTimeCatchTheBus(buses, passengers, capacity) << std::endl;

    return 0;
}