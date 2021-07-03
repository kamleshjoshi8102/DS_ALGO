/* program to count zeros in a number*/
#include <iostream>
using namespace std;
int countZeros(int N){
  if(N<10){
    if(N==0)
       return 1;
    else
       return 0;
  }
  int rem=N%10;
  if(rem==0){
    return 1 + countZeros(N/10);
  }
  else{
    return countZeros(N/10);
  }
  
}
int main() {
  int N;
  cin>>N;
  int smallOut= countZeros(N);
  cout<<smallOut;

}
/*Example
Input:909090
Output: 3
*/