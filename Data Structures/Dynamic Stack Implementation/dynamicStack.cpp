#include <iostream>

using namespace std;
#include "Stack.cpp"

int main()
{
    Stack s1; //as we have created dynamic stack the user dont have to give size now !
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.push(70); //as we created a dynamic stack we can insert 70 now.
    
    cout<<s1.top()<<endl; //70
    cout<<s1.pop()<<endl;  //70
    cout<<s1.pop()<<endl; //60
    cout<<s1.pop()<<endl; //50
    
    cout<<s1.top()<<endl; //40
    cout<<s1.size()<<endl; //4 
    cout<<s1.isEmpty()<<endl; //0 i.e false 
    
}
