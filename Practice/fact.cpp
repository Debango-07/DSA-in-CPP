#include<iostream>
using namespace std;
int factorial(int num){
    int fact=1;
    if(num==1||num==0){
        fact=1;
    }
    else{
        for(int i=2;i<=num;i++){
            fact=fact*i;
        }   
    } 
    return fact;
}
int main(){
    int n,fact;
    cout<<"Enter a number: ";
    cin>>n;
    fact=factorial(n);
    cout<<"Factorial of "<<n<<" is "<<fact;
    return 0;
}