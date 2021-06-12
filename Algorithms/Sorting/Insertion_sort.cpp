#include <iostream>
using namespace std;

void insertion_sort(int a[],int n){
  for(int i=1;i<n;i++){//i will go from 1 to n-1 as we consider 0th element as part of another array 
    int temp=a[i];
    int j=i-1; //divide the array 
    while(j>=0 and  a[j]>temp){
      a[j+1]=a[j];
      j--;
      
    }
    a[j+1]=temp;
    
  }
}

int main() {
  int n,a[1000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  insertion_sort(a,n);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  
 
  
}