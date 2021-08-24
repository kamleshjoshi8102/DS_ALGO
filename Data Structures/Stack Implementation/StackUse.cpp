#include <iostream>

using namespace std;
#include "Stack.cpp" //imported  Stack class 

int main()
{
    Stack s1(6);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.push(70); //stack is full
    
    cout<<s1.top()<<endl; //60
    cout<<s1.pop()<<endl;  //60
    cout<<s1.pop()<<endl; //50
    cout<<s1.pop()<<endl; //40
    
    cout<<s1.top()<<endl; //30
    cout<<s1.size()<<endl; //3 
    cout<<s1.isEmpty()<<endl; //0 i.e false 
    
}
