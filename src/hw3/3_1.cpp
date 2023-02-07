#include <iostream>
#include <unordered_map>
#include <string>
#include <stack>

using namespace std;

string isBalanced(string s) {
    std::stack<char> characterStack;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            characterStack.push(ch);
        } else if (ch == ')') {
            if (characterStack.top() == '(') {
                characterStack.pop();
            } else {
                return "NO";
            }
        } else if (ch == '}') {
            if (characterStack.top() == '{') {
                characterStack.pop();
            } else {
                return "NO";
            }
        } else if (ch == ']') {
            if (characterStack.top() == '[') {
                characterStack.pop();
            } else {
                return "NO";
            }
        } else {
            return "NO";
        }
    }
    
    return "YES";
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
