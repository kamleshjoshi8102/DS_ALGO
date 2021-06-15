#include <iostream>
using namespace std;
//Function to reverse array
void reverseArray(int a[],int s,int e){
  while(s<e){
    int temp=a[s];
    a[s]=a[e];
    a[e]=temp;
    s++;
    e--;
  }
}


int main() {
  int n;
  cin>>n;
  int a[100];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  reverseArray(a,0,n-1);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}