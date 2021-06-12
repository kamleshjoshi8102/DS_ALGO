//A program to generate subarrays of an array 
#include<iostream>
using namespace std;
int main(){
  int a[1000];
  int n;
  cout<<"Size";
  cin>>n;
  //array as input 
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      for(int k=i;k<=j;k++){
        cout<<a[k]<<" ";
      }
      cout<<endl;
    }
  }
}