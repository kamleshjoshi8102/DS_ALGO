/*Program to count number of digits*/
#include <iostream>
using namespace std;
int countdigits(int n){
  if(n<10){
    if(n/10==0){
    return 1;
    }
    
  }
  return 1+countdigits(n/10);
}
int main() {
  int n;
  cin>>n;
  cout<<countdigits(n);
 
}
/*Example
Input:445560
Output:6 
*/