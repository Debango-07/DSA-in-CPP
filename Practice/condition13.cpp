//Wrong
#include<iostream>
using namespace std;
int main(){
    int percentage, total_marks;
    int sub1,sub2,sub3;
    char a;
    cout<<"Enter Marks of three subjects out of hundered"<<endl;
    cout<<"sub1= ";
    cin>>sub1;
    cout<<"sub2= ";
    cin>>sub2;
    cout<<"sub3= ";
    cin>>sub3;
    total_marks=sub1+sub2+sub3;
    percentage=total_marks/3;
    cout<<"Total marks= "<<total_marks<<endl;
    cout<<"Percentage= "<<percentage<<endl;
    cout<<"Press D if Student is disciplined"<<endl;
    cin>>a;
    if (percentage>40)
    {
        if (a='D')
        {
            cout<<"Student passed";
        }
    }
    else 
    cout<<"Student fails";
    return 0;
}