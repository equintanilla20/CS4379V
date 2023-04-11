#include <tuple>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
// test input: 4 1 3 3 2 2 1 3 4 3
// test input: 4 2 1 14 12 11 7 13 6 3
long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
    long long tempScore = 0;
    long long maxScore = 0;
    tuple<int,int> temp;
    vector<tuple<int, int>> nums;
    priority_queue<tuple<int, int>, vector<tuple<int, int>>, greater<tuple<int, int>>> pqueue;

    // Tie integers from both arrays by position into
    // a single vector as a tuple
    for (int i = 0; i < nums1.size(); i++) {
        nums.push_back(make_tuple(nums2[i], nums1[i]));
    }

    // Sort the new single vector by nums2's values
    // In each subsequence, the last value of x in the
    // tuple will be the min used in calculation. 
    // Tuple: <x, y>
    sort(nums.begin(), nums.end());

    for (tuple<int, int> tupe : nums) {
        // Add each tuple to a minheap
        // Add the y value to the total score
        pqueue.push(tupe);
        tempScore += get<1>(tupe);

        // If the minheap is larger than k,
        // remove the top element which
        // is also the smallest x
        if (pqueue.size() > k) {
            temp = pqueue.top();
            pqueue.pop();
            tempScore -= get<1>(temp);
        }

        // If the minheap is the same size as k,
        // calculate a max score and keep the largest
        if (pqueue.size() == k) {
            maxScore = max(maxScore, (tempScore * get<0>(pqueue.top())));
        }
    }

    return maxScore;
}

int main() {
    int sizeOfArrays;
    int element;
    vector<int>array1;
    vector<int>array2;
    cin >> sizeOfArrays;
    int i = 0;
    int k = 0;

    while(i < sizeOfArrays) {
        cin >> element;
        array1.push_back(element);
        i++;
    }

    int j = 0;
    while(j < sizeOfArrays) {
        cin>>element;
        array2.push_back(element);
        j++;
    }

    cin >> k;
    cout << maxScore(array1, array2, k) << endl;

    return 0;
}