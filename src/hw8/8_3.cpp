#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
// Test Case: 4 24 37 96 04 2 2 1 2 2
// Test Case: 4 102 473 251 814 4 1 1 2 3 4 2 1 2
void trimStrings(std::vector<std::string>& tempNums, int t) {
    for (int i = 0; i < tempNums.size(); i++) {
        tempNums[i] = tempNums[i].erase(0, tempNums[i].size() - t);
    }
}

std::vector<int> smallestTrimmedNumbers(std::vector<std::string>& nums, std::vector<std::vector<int>>& queries) {
    std::vector<int> answer;

    for (int i = 0; i < queries.size(); i++) {
        std::vector<std::string> tempNums(nums.begin(), nums.end());
        std::vector<std::pair<std::string, int>> indices;
        int k = queries[i][0] - 1;
        int trim = queries[i][1];

        // Trim from the right to $trim digits
        trimStrings(tempNums, trim);

        // Push nums and their indices in vector for sorting
        for (int j = 0; j < tempNums.size(); j++) {
            indices.push_back(std::make_pair(tempNums[j], j));
        }

        // Stable sort to preserve order of ties
        std::stable_sort(indices.begin(), indices.end());

        // Push kith answer into answer vector
        answer.push_back(indices[k].second);
    }

    return answer;
}

int main() {
    std::vector<std::string> nums;
    std::vector<vector<int>> queries;
    int sizeNums;
    int sizeQueries;
    std::string elementString;
    int element;

    std::cin >> sizeNums;
    int k = 0;
    while (k < sizeNums ) {
        std::cin >> elementString;
        nums.push_back(elementString);
        k++;
    }
    
    std::cin >> sizeQueries;
    for (int i = 0; i < sizeQueries; i++) {
        std::vector<int> v;
        for(int j = 0; j < 2; j++){
            std::cin >> element;
            v.push_back(element);
        }
        queries.push_back(v);
    }

    std::vector<int> ans = smallestTrimmedNumbers(nums, queries);  

    std::cout << "{";
    for (int i = 0; i < ans.size(); i++) {
        if (i == (ans.size() - 1)) std::cout << ans[i] << "}";
        else std::cout << ans[i] << ",";
    }
    return 0;
}