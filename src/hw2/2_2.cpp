#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int longestConsecutive(vector<int>& nums) {
    auto max = 0;
    std::unordered_set<int> hashSet;

    for (int n : nums) {
        hashSet.insert(n);
    }

    for (int i = 0; i < nums.size(); i++) {
        if (hashSet.find(nums[i] - 1) == hashSet.end()) {
            int temp = nums[i];
            while (hashSet.find(temp) != hashSet.end()) {
                temp++;
            }
            if ((temp - nums[i]) >= max) {
                max = temp - nums[i];
            }
        }
    }
    
    return max;
}

int main() {
    vector<int> nums;
    int numsLength;
    int num;
    
    cin>>numsLength;
    
    for (int i=0; i < numsLength; i++) {
        cin>>num;
        nums.push_back(num);
    }
    
    cout<<longestConsecutive(nums)<<endl;

   return 0;
}
