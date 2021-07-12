/*Program to convert string to integer */
#include <iostream>
#include<cmath>
using namespace std;
int length(char input[]) {
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++) { 
        len++;
    }
    return len;
}
int stringtoint(char input[], int start) { 
  
    int len=length(input);
    int b=input[0];
    b=b-48;
    if(len==1){
      return b;
      
    }
    
  return (b*pow(10,len-1)+stringtoint(input+1,start+1));
    
}
int stringtoint(char input[]) {
    int ans=stringtoint(input, 0);
    return ans;
}

int main(){
  char input[2000];
  cin.getline(input,2000);
  cout<<stringtoint(input);
}
