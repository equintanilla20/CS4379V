#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
    int fullBags = 0;
    int count = 0;

    // Check differences in capacity and rocks
    for (int i = 0; i < capacity.size(); i++) {
        int difference = capacity[i] - rocks[i];
        count += difference;
    }
    // If the there are more rocks than differences
    // all the bags would be filled
    if (additionalRocks > count)
        return capacity.size();

    for (size_t i = 0; i < capacity.size(); i++) {
        // 1. If the bag has room and theres rocks to give,
        //    place a rock in the bag
        if (capacity[i] > rocks[i] && additionalRocks > 0) {
            rocks[i] += 1;
            additionalRocks--;
        }

        // 2. Bag is full
        if (capacity[i] == rocks[i]) {
            fullBags++;
        }

        // 3. Reset loop if bags are not full and there are
        //    additional rocks to place.
        if (i == capacity.size()-1 && fullBags < capacity.size() && additionalRocks > 0) {
            i = -1;
        }
    }
    return fullBags;
}

int main() {
    int sizeOfArrays;
    int element;
    vector<int> capacity;
    vector<int> bags;
    cin >> sizeOfArrays;
    int i = 0;
    int additionalRocks;
    
    while (i < sizeOfArrays) {
        cin >> element;
        capacity.push_back(element);
        i++;
    }
    
    int j = 0;
    while (j < sizeOfArrays) {
        cin >> element;
        bags.push_back(element);
        j++;
    }
    
    cin >> additionalRocks;
    cout << maximumBags(capacity, bags, additionalRocks) << endl;
    
    return 0;
}