#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <vector>
#include <string>

template<typename K, typename V>  // most generic way to set up a print function
// can then be used with every map.  save it for later!!!!
void print_map(std::unordered_map<K, V> const &m)
{
  for (auto const &pair: m) {
    std::cout << "{" << pair.first << ": " << pair.second << "}\n";
  }
}

int longestPal(std::string inString){
   int maxLength = 0;
   //// your code here ????
   
   return maxLength;
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