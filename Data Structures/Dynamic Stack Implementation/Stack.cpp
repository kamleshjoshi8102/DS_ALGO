#include <iostream>
#include <climits>
using namespace std;
class Stack{
    int *data;    //data members to be kept private
    int nextIndex;
    int capacity;
    
 public: 
     Stack(){  //constructor
         data=new int[4]; //dynamic allocation of array
         nextIndex=0;  
         capacity=4;  //size of array
     }
     
     bool isEmpty(){
         /*if(nextIndex==0){
             return true;
         }
         else{
             return false;
         }*/
         return (nextIndex==0); //return true if stack is empty
     }
     int size(){
         return nextIndex;  //return current size of stack
     }
     void push(int ele){
         if(capacity==nextIndex){ //if stack is already full then we have to double size of array 
             int *newdata=new int[2*capacity];
             for(int i=0;i<capacity;i++){
                 newdata[i]=data[i];
             }
             capacity *=2;
             delete[] data;
             data=newdata;
         }
         data[nextIndex]=ele;//insert element at current index 
         nextIndex++;//increment index
         
     }
     int pop(){
         if(isEmpty()){ // if stack is empty then we cannot pop any element 
             cout<<"Stack is empty"<<endl;
             return INT_MIN;
         }
         nextIndex--; //decrement current index
         return data[nextIndex]; //return popped element 
     }
     int top(){
         if(isEmpty()){
             cout<<"Stack is empty"<<endl; // if stack is empty then there is no top element
             return INT_MIN;
         }
         return data[nextIndex-1]; //return top element
         
     }
};
