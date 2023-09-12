#include<iostream>
using namespace std;
string grade(int m){
    string g;
    if(m>=91&&m<=100){
        g="AA";
    }
    else if(m>=81&&m<=90){
        g="AB";
    }
    else if(m>=71&&m<=80){
        g="BB";
    }
    else if(m>=61&&m<=70){
        g="BC";
    }
    else if(m>=51&&m<=60){
        g="CD";
    }
    else if(m>=41&&m<=50){
        g="DD";
    }
    else if(m<=40){
        g="FAIL";
    }
    return g;
}
int main(){
    int m;
    string grad;
    cout<<"Enter your Marks (out of 100): ";
    cin>>m;
    grad=grade(m);
    cout<<grad;
    return 0;
}