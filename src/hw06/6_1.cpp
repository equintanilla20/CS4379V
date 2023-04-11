#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;
// 5 w wo wor worl world
// 7 a banana app appl ap apply apple
std::string longestWord(std::vector<std::string>& words) {
    std::string result = "";
    std::unordered_map<std::string, int> wordMap;

    // Sort in ascending order
    sort(words.begin(), words.end());
    
    for (std::string word : words) {
        // For every word in words, check if its been added to the map
        if (wordMap.find(word.substr(0, word.length()-1)) != wordMap.end()) {
            // Check if the current word is longer than current result
            if (word.length() > result.length())
                result = word;

            // Insert word into map for loop
            wordMap.insert({word, 0});
        }
    }

    return result;
}

int main() {
    int sizeOfArrays;
    std::string element;
    std::vector<std::string> vec;
    std::cin >> sizeOfArrays;
    int i = 0;
    
    while (i < sizeOfArrays) {
        std::cin >> element;
        vec.push_back(element);
        i++;
    }
    
    std::cout << longestWord(vec) << std::endl;
    
    return 0;
}