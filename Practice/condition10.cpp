#include<iostream>
using namespace std;
int main(){
    int choice, f,c;
    cout<<"Enter your choice"<<endl<<"1 For celsius to Fahrenheit"<<endl<<"2 For Fahrenheit to celsius"<<endl;
    cin>>choice;
    if (choice==1)
    {
        cout<<"Enter celsius: "<<endl;
        cin>>c;
        cout<<"Fahrenheit= "<<(c*9/5)+32;
    }
    else
        cout<<"Enter Fahrenheit: "<<endl;
        cin>>f;
        cout<<"Celsius= "<<(f*5/9)-32;
    return 0;
}