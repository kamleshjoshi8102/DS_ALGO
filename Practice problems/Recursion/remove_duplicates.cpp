#include <iostream>
#include <string.h>
using namespace std;
void removeduplicates(char input[]){
  if(input[0]=='\0'){
    return ;
  }
  if(input[0]==input[1]){
    for(int i=0;input[i]!='\0';i++){
      input[i]=input[i+1];
    }
    removeduplicates(input);
  }else{
  removeduplicates(input+1);
  }
}

int main() {
   char input[1000];
   cin.getline(input,1000);
   removeduplicates(input);
   cout<<input;
}