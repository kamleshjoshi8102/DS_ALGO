/*Program to find geometric sum */
#include <bits/stdc++.h>
using namespace std;
double Gsum(int x){
  if(x==0){
    return 1;
  }
  double  ans=Gsum(x-1);
  return ans+(1/pow(2,x));
}

int main() {
  int x;
  cin>>x;
  cout<<Gsum(x);
}

/*Example
Input : 1 
Output:1.5
*/