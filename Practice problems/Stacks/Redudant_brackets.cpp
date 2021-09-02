#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
bool checkRedundantBrackets(string &input) {
    stack<char> s;
    bool flag = false;
    for(int i = 0; i < input.length(); i++) { 
        if(input[i] != ')') {
            s.push(input[i]);
        }
        else { 
            while(s.top() != '(') {
                s.pop();
                flag = true;
                if(s.empty()) { 
                    break;
                }
            }
            if(s.empty()) {
                continue;
            }
            if(flag) { 
                s.pop();
                flag = false;
            }
            else {
                return true;
            }
        }
    }
    return false;
}
int main() {
  string input;
  cin>>input;
  cout<<checkRedundantBrackets(input);

}