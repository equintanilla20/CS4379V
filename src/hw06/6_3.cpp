#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int maximumUniqueSubarray(vector<int>& nums) {
   int score = 0;
   std::unordered_map<int, int> numMap;
   std::sort(nums.begin(), nums.end(), std::greater<int>());
   for (int i : nums) {
      if (numMap.find(i) == numMap.end()) {
         score += i;
         numMap.insert({i, 0});
      }
   }
   return score;
}

int main() {
    int size;
    int element;
    vector<int> nums;
    cin>>size;
    
    for(int i=0; i<size; i++){
        cin>>element;
        nums.push_back(element);
    }

    cout << maximumUniqueSubarray(nums)<< endl;
    return 0;
}