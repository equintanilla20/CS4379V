#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <vector>
#include <string>

template<typename K, typename V>  // most generic way to set up a print function
// can then be used with every map.  save it for later!!!!
void print_map(std::unordered_map<K, V> const &m) {
    for (auto const &pair: m) {
        std::cout << "{" << pair.first << ": " << pair.second << "}\n";
    }
}

int longestPal(std::string inString) {
    std::unordered_map<char, int> chars;
    int max = 0;
    int odds = 0;

    // Fill map with characters, count them as they enter
    for (char ch : inString) {
        if (chars.find(ch) == chars.end())
            chars[ch] = 1;  // New char
        else
            chars[ch]++;    // Char already present
    }

    for (auto i = chars.begin(); i != chars.end(); i++) {
        if (i->second % 2 == 0) {
            max += i->second;
        } else {
            odds = 1;
            max += i->second - 1;
        }
    }
    return max + odds;
}

int main() {
    // read in the string of characters
    std::string inString = "";
    //freopen("data.txt","r",stdin);
    std::cin >> inString;

    // call longestPal
    auto maxLength = longestPal(inString);
    // output
    std::cout << maxLength << std::endl;
    return 0;
}