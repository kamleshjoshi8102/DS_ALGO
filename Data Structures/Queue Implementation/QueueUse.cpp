// queue implementation
#include <iostream>
#include "Queue.cpp"
using namespace std;

int main(){
    Queue<int> q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); //queue is full
    q.enqueue(70); //queue is full
    
    cout<<q.front()<<endl;  //10
    cout<<q.dequeue()<<endl; //10
    cout<<q.dequeue()<<endl;  //20
    cout<<q.dequeue()<<endl; //30
    
    cout<<q.front()<<endl; //40
    cout<<q.getSize()<<endl; //2
    cout<<q.isEmpty()<<endl; //0
}
