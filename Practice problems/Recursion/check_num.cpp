/*Program to search a number recursively*/
#include <iostream>
using namespace std;
bool checknumber(int a[],int n,int x){
  if(n==0 ){
    return false;
  }
  if(a[n-1]==x){
    return true;
  }
  return checknumber(a+1,n-1,x);
}

int main() {
  int n,a[200],x;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  cin>>x;
  cout<<checknumber(a,n,x);
  
}
/*Example
Input:
3 
9 8 10 
10 
Output:
True 
*/