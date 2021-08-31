//reverse stack 
#include <iostream>
#include <stack>
using namespace std;

void reverseStack(stack<int> &input,stack<int> &empty){
    if(input.size()==0||input.size()==1){ //base case
        return;
    }
    int x=input.top(); //store top element 
    input.pop(); //pop top element
    reverseStack(input,empty);  //recursion
    while(!input.empty()){
        empty.push(input.top());
        input.pop();
    }
    input.push(x);
    while(!empty.empty()){
        input.push(empty.top());
        empty.pop();
    }
}

int main()
{
    stack<int> input;
    stack<int> output;
    input.push(10);
    input.push(20);
    input.push(30);
    input.push(40);
    input.push(50);
    reverseStack(input,output);
    while(!input.empty()){
        cout<<input.top()<<" ";
        input.pop();
    }
}
