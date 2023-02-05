#include <iostream>
#include <unordered_map>
#include <string>
#include <stack>

using namespace std;

string isBalanced(string s) {
   //your code goes here
}

int main()
{
   int size;
   cin>>size;
   string input;
   
   for(int i=0; i<size; i++) {
      cin>>input;
      cout<<isBalanced(input)<<endl;
   }
   
   return 0;
}
