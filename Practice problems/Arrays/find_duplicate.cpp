#include <bits/stdc++.h> 
using namespace std;
int duplicate(int a[], int n){
        int sum=0;
        for (int i = 0; i < n; i++) 
            sum=sum+a[i]; 
        int ans=((n-2)*(n-1))/2;
        return sum-ans;
}

int main() {
  int n;
  cin>>n;
  int a[100];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<duplicate(a,n);
}