#include <bits/stdc++.h>
using namespace std;
void push0toend(int a[],int n){
  int i=0;
  int k=0;
  for(;i<n;i++){
    if(a[i]!=0){
      swap(a[k],a[i]);
      k++;
    }
  }
}

int main() {
  int n;
  cin>>n;
  int a[1000];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  push0toend(a,n);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}