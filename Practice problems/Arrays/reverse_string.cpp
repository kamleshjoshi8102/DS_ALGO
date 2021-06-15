#include<bits\stdc++.h>
string string_rev(string str){

    int n=str.length();
    int s=0;
    int e=n-1;
    while(s<e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
    return str;
}

int main(){
    string s;
    cin>>s;
    string res=string_rev(s);
    cout<<res;
    
}
    
