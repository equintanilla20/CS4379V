#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <unordered_set>

using namespace std;
// Test Case: 2 10 20 4 2 17 18 19 2
int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
    std::sort(buses.begin(), buses.end());
    std::sort(passengers.begin(), passengers.end());
    std::queue<std::pair<int, int>> bq;
    int answer = 0;

    for (int b : buses) {
        bq.push(std::make_pair(b, capacity));
    }
	answer = passengers[1] - 1;
    for (int i = 0; i < passengers.size() - 1; i++) {
        
        if (bq.size() > 0 && passengers[i] <= bq.front().first && bq.front().second > 0) {
            bq.front().second--;
			if (bq.front().second > 0 && passengers[i] < bq.front().first && passengers[i+1] > bq.front().first) {
				answer = passengers[i+1] - 1;
			}
        } else if (bq.size() > 0 && bq.front().second == 0) {
        	bq.pop();
        }
		if (bq.size() == 0) {
			answer = passengers[passengers.size()-1] + 1;
		}
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