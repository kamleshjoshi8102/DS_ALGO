#include <iostream>
using namespace std;
int Staircase(int N){
  if(N==1 || N==0 ){
    return 1;
  }
  else if(N==2){
    return 2;
  }
  else{
   int x= Staircase(N-1);
   int y=Staircase(N-2);
   int z=Staircase(N-3);
   return x+y+z;
  }
}

int main() {
  int N;
  cin>>N;
  cout<<Staircase(N);
}