/*Program to calculate sum of digits*/
#include <iostream>
using namespace std;
//Function to find sum.
int sumDigits(int N){
  if(N==0){
    return 0;
  }
  int rem=N%10;
  return rem+sumDigits(N/10);
  
  
}

int main() {
  int N;
  cin>>N;
  cout<<sumDigits(N);
  
}
/*Example
Input:
12345
Output:
15
*/