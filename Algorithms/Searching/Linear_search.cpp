#include <iostream>
using namespace std ;

int main() {
  int n;
  cin>>n;
  int a[1000];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int k,i;
  cin>>k;
  for(i=0;i<n;i++){
    if(a[i]==k){
      cout<<"element found at index "<<i<<endl;
      break;
    }
  }
  if(i==n){
    cout<<"element not found "<<endl;
  }
  
}