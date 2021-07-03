/* program to find nth  power of a number*/
#include <iostream>
using namespace std;
int findPower(int x,int n){
    if(n==0)
       return 1;
    
    return x*findPower(x,n-1);
}
int main() {
  int x,n;
  cin>>x>>n;
  cout<<findPower(x,n);
}
/*Example
Input:2 5
Output: 32
*/