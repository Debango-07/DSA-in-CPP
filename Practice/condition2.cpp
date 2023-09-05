#include<iostream>
using namespace std;
int main(){
    int salary;
    cout<<"Enter your salary"<<endl;
    cin>>salary;
    if(salary<=3000)
    {
        cout<<"You are Poor";
    }
    else
    cout<<"You are rich";
    return 0;
}