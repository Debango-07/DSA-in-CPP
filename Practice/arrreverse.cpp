#include<iostream>
using namespace std;
int main(){
    int n,s,e,temp;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for( s=0,e=n-1;s<e;s++,e--){
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}