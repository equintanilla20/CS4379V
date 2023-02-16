#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
   //your code here
}


int main() {
    int sizeOfArrays;
    int element;
    vector<int> startTime;
    vector<int> endTime;
    vector<int> profit;
    cin >> sizeOfArrays;
    
    int i = 0;
    while (i < sizeOfArrays){
        cin >> element;
        startTime.push_back(element);
        i++;
    }
    
    int j = 0;
    while(j < sizeOfArrays){
        cin >> element;
        endTime.push_back(element);
        j++;
    }
    
    int k = 0;
    while(k < sizeOfArrays){
        cin >> element;
        profit.push_back(element);
        k++;
    }
    
    cout << jobScheduling(startTime, endTime, profit) << endl;
    
    return 0;
}