//reverse stack 
#include <iostream>
#include <queue>
using namespace std;

void reversequeue(queue<int> &input){
   
    if(input.empty()){
        return;
        
    }
    int data=input.front();
    input.pop();
    
    reversequeue(input);
    input.push(data);
}

int main()
{
    queue<int> input;
    input.push(10);
    input.push(20);
    input.push(30);
    input.push(40);
    input.push(50);
    reversequeue(input);
    while(!input.empty()){
        cout<<input.front()<<" ";
        input.pop();
    }
}
