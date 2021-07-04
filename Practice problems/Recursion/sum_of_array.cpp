/*Program to find sum of array*/
#include <iostream>
using namespace std;
int sumArray(int a[],int n){
  if(n==0){
    return 0;
}
  return sumArray(a,n-1)+a[n-1];
}

int main() {
  int n,a[200];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<sumArray(a,n);
  
}
/*Example 
Input:
5
8 0 9 0 6 
Output:
23
*/
