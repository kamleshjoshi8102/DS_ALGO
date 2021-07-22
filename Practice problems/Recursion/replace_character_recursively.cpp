#include <iostream>

using namespace std;
void replacechar(char input[],char c1,char c2){
    if(input[0]=='\0'){
        return;
    }
    if(input[0] == c1){
        input[0]=c2;
    }
    replacechar(input+1,c1,c2);
   
    
}

int main(){
    char input[1000],c1,c2;
    cin.getline(input,1000);
    cin>>c1>>c2;
    replacechar(input,c1,c2);
    cout<<input;
  
   
}
