#include <bits/stdc++.h>
using namespace std ;
void selection_sort(int a[],int n){
  for (int i=0;i<n;i++){
    int min = i;
    for(int j=i;j<n;j++){
      if(a[j]<a[min]){
        min=j;
      }
      
      
    }
    swap(a[i],a[min]);
  }
}

int main() {
  int n;
  cin>>n;
  int a[1000];
  for (int k=0;k<n;k++){
    cin>>a[k];
    
  }
  selection_sort(a,n);
  for(int y=0;y<n;y++){
    cout<<a[y]<<" ";
  }
  
}