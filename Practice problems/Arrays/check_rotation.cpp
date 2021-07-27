#include <iostream>
using namespace std;
int checkRotation(int a[],int n){
  int i=0;
  int ans;
  for(;i<n;i++){
    if(a[i]<a[i-1]){
      ans=i;
    }
  }
  
  return ans%n;
}
int main() {
  int n,d,a[1000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<checkRotation(a,n);

}