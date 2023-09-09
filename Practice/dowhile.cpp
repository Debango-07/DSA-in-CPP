// Write a do-while loop that asks the user to enter two numbers. The numbers should be added and the sum displayed. The loop should ask the user whether he or she wishes to perform the operation again. If so, the loop should repeat; otherwise it should terminate.
#include<iostream>
using namespace std;
int main(){
    int a,b,sum,choice;
    do
    {
        cout<<"Enter first number: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;
        sum=a+b;
        cout<<"Their sum is: "<<sum<<endl;
        cout<<"To perform the sum again PRESS 1: ";
        cin>>choice;
    } while (choice==1);
    
    return 0;
}