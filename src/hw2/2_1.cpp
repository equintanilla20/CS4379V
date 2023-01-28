#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int longestConsecutive(vector<int>& nums) {
    auto counter = 1;
    auto max = 0;

    sort(nums.begin(), nums.end());

    for (int i = 0; i <= nums.size()-1; i++) {
        if (nums[i] == nums[i+1] - 1) {
            counter++;
        } else {
            if (counter >= max) {
                max = counter;
            }
            counter = 1;
        }
    }
    return max;
}

int main() {
    vector<int> nums;
    int numsLength;
    int num;
    
    cin>>numsLength;
    
    for(int i=0; i<numsLength; i++){
        cin>>num;
        nums.push_back(num);
    }
    
    cout<<longestConsecutive(nums)<<endl;

   return 0;
}
