// Return the duplicate element in an array
#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                temp=arr[i];
                break;
            }
        }
    }
    cout<<"Duplicate element is: "<<temp;
    return 0;
}