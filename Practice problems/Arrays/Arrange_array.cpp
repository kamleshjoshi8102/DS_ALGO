#include <iostream>
using namespace std;
void fill(int a[],int n){
  int val=1;
  for(int i=0;i<=(n-1)/2;i++){
    a[i]=val;
    val=val+2;
  }
  if(n%2!=0){
    val= n-1;
  }
  else {
    val=n;
  }
  for(int i=((n-1)/2)+1;i<n;i++){
    a[i]=val;
    val=val-2;
  }
}
//Another approach 
void fillarray(int a[],int n){
  int s=0;
  int e=n-1;
  int val=1;
  while(s<e){
    a[s]=val;
    val++;
    a[e]=val;
    val++;
    s++;
    e--;
    if(n%2!=0 && s==e){
      a[s]=val;
    }
    
  }
}

int main() {
  int n;
  cin>>n;
  int a[1000];
  //fill(a,n);
  fillarray(a,n);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}


