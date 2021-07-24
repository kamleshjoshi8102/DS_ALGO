#include <bits/stdc++.h>
using namespace std;
int partition(int a[],int si,int ei){
    int pivot=a[si];
    int no=0;
    for(int i=si+1;i<=ei;i++){
        if(a[i]<=pivot){
          no++;
        }
    }
    int pi=si+no;
    swap(a[pi],a[si]);
    int i=si;
    int j=ei;
    while(i<=pi && j>=pi){
        if(a[i]<pivot){
            i++;
        }
        else if(a[j]>=pivot){
            j--;
        }
        else{
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    return pi;
}
void quicksort(int a[],int si,int ei){
    if(si>=ei){
        return;
    }
    int c=partition(a,si,ei);
    quicksort(a,si,c-1);
    quicksort(a,c+1,ei);
    
}


int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
