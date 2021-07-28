#include <bits/stdc++.h>
using namespace std;
void sort01(int a[],int n){
  int i=0;
  int j=n-1;
  while(i<j){
    if(a[i]==0){
      i++;
    }
    else if(a[j]==1){
      j--;
    }
    else{
      swap(a[i],a[j]);
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
  sort01(a,n);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}