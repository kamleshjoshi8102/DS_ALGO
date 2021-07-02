/* program to multiply two nose using recursion
1.base case - if n=0 we return 0
2.small output- if n=1 we return m 
3.recursion- m,n-1
*/
#include <iostream>
using namespace std;
int multiplication(int m,int n){
  if(n==0){
    return 0;
  }
  if(n==1){
    return m;
  }
  return m+multiplication(m,n-1);
}

int main() {
  int m,n;
  cin>>m>>n;
  int ans=multiplication(m,n);
  cout<<ans;
  
}