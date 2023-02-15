#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int maxNumberOfApples(vector<int>& weight) {
    int maxWeight = 5000;
    int tempWeight = 0;
    priority_queue<int> pqueue;

    sort(weight.begin(), weight.end());

    for (size_t i = 0; i < weight.size(); i++) {
        if (tempWeight + weight[i] < maxWeight) {
            tempWeight += weight[i];
            pqueue.push(weight[i]);

        }
    }
    return pqueue.size();
}

int main() {
    int sizeOfArrays;
    int element;
    vector<int> array;
    cin >> sizeOfArrays;
    int i = 0;
    
    while(i < sizeOfArrays) {
        cin >> element;
        array.push_back(element);
        i++;
    }
    
    cout << maxNumberOfApples(array) << endl;

    return 0;
}