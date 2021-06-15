/*move negative elements to start of an array*/

#include <iostream>
#include <climits>
using namespace std;
void rearrange(int a[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(a[s]<0 && a[e]<0){
            s++;
        }
        else if(a[s]>0 && a[e]<0){
            swap(a[s],a[e]);
            s++;
            e--;
        }
        else if(a[s]>0 && a[e]>0 ){
            e--;
        }
        else{
            s++;
            e--;
        }
    }
}

int main() {
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	rearrange(a,n);
	for(int i=0;i<n;i++){
	    cout<<a[i]<<" ";
	}
	
    
}