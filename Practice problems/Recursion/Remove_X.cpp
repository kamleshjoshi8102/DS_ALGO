/*Program to remove x */
#include <iostream>
using namespace std;
int length(char input[]) {
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++) { 
        len++;
    }
    return len;
}
void removeX(char input[], int start) { 
    if(input[start] == '\0' ) {
        return;
    }
    int len=length(input);
    
    
    if(input[start] == 'x') {
      for(int i=start;i<len;i++){
        input[i] = input[i+1];
      }
      len--;
    }
    else{
      start++;
    }
    removeX(input,start);
    
}
void removeX(char input[]) {
    removeX(input, 0);
}

int main(){
  char input[2000];
  cin.getline(input,2000);
  removeX(input);
  cout<<input;
}
