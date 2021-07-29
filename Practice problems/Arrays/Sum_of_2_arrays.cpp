#include <bits/stdc++.h>
using namespace std;
void sumof2arrays(int input1[],int size1,int input2[],int size2){
  int output[1000];
  int i = size1-1, j = size2-1;
    int carry=0;
    int k;
    if(size1 < size2){
      k = size2;
    }
    else{
       k = size1;
    }
    while(k >= 0){
        output[k] = (input1[i]+input2[j]+carry)%10;
          carry = (input1[i]+input2[j]+carry)/10;
        if(i>0)
            i--;
        else{
            i=-1;
            input1[i] = 0;
        }
        if(j>0)
            j--;
        else{
            j=-1;
            input2[j] = 0;
        }
        k--;
    }
    int m=max(size1,size2);
    for(int i=0;i<=m;i++){
      cout<<output[i]<<" ";
    }
    

}

int main() {
  int a1[1000],a2[1000],m,n;
  cin>>m;
  for(int i=0;i<m;i++){
    cin>>a1[i];
    
  }
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a2[i];
  }
  int output[1000];
  sumof2arrays(a1,m,a2,n);
  
}