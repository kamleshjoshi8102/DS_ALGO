#include <iostream>
using namespace std;
int binary_search(int a[],int n,int key){
  int s=0;
  int e=n-1;
  //start should not cross end 
  
  while(s<=e){
    int mid=(s+e)/2;
    if(a[mid]==key){
      return mid;
    }
    // search in left of Array 
    else if(a[mid]>key){
      e=mid-1;
      
    }
    //search in right of Array 
    else{
      s=mid+1;
    }
    
    
  }
  return -1;
}
int main() {
  int n;
  cout<<"Size of Array "<<endl;
  cin>>n;
  int a[1000];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int key;
  cin>>key;
  cout<<binary_search(a,n,key);
  
}