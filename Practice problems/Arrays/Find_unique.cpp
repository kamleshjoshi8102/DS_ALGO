#include <bits/stdc++.h> 
using namespace std;
int FindUnique(int ar[], int ar_size){
        int res=ar[0];
        for (int i = 1; i < ar_size; i++) 
            res = res^ ar[i]; 
  
        return res; 
}

int main() {
  int n;
  cin>>n;
  int a[100];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<FindUnique(a,n);
}