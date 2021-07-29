#include <bits/stdc++.h>
using namespace std;
int secondlargest(int a[],int n){
  int l=INT_MIN;
  int s=INT_MIN;
  for(int i=0;i<n;i++){
    if(a[i]>l){
      s=l;
      l=a[i];
      
    }
   if(a[i]>s && a[i]!=l){
      s=a[i];
    }
    
  }
  return s;
}

int main() {
  int n;
  cin>>n;
  int a[1000];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<secondlargest(a,n);
}