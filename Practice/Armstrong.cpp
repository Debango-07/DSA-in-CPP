#include<iostream>
using namespace std;
int main(){
    int a,temp,rem,sum=0;
    cout<<"Enter a number: ";
    cin>>a;
    temp=a;
    while(temp>0){
    rem=temp%10;
    sum=sum+(rem*rem*rem);
    temp=temp/10;
    }
    if(a==sum){
        cout<<"It is Armstrong";
    }
    else{
        cout<<"Not a Armstrong";
    }
    return 0;
}