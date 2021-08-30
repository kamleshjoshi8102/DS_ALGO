#include <iostream>
using namespace std;
template <typename T>
class Queue{
    T *data;
    int size,capacity,nextIndex,firstIndex;
    
    public:
    Queue(){ //initialize 
        data=new T[5];
        size=0;
        nextIndex=0;
        firstIndex=-1;
        capacity=5;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    void enqueue(T element){ 
        if(size==capacity){ //queue is full 
            T *newData=new T[2*capacity]; //make a new array with double size 
            int j=0;
            for(int i=firstIndex;i<capacity;i++){//copy all elements from old array to new array 
                newData[j]=data[i];
                j++;
            }
            for(int i=0;i<firstIndex;i++){
                newData[j]=data[i];
                j++;
            }
            delete [] data; //deallocate 
            data=newData; //point data to new data
            firstIndex=0; //update front 
            nextIndex=capacity;//update nextIndex
            capacity *=2;//update capacity
        }
        data[nextIndex]=element; //insert element 
        nextIndex=(nextIndex+1)%capacity; //modulus is used so that we can insert elements circularly
        if(firstIndex==-1){ //if front is -1 then initialize to 0
            firstIndex=0;
        }
        size++; //increment size
    }
    
    T dequeue(){
        if(isEmpty()){ //queue is empty 
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        T ans=data[firstIndex];//store the element to be deleted
        firstIndex=(firstIndex+1)%capacity; //increment frontindex 
        size--;//decrement size 
        if(size==0){//if queue becomes empty 
            firstIndex=-1;
            nextIndex=0;
        }
        return ans;

    }
    
    T front(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        return data[firstIndex];
    }
};
