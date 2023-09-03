#include<iostream>
using namespace std;
class Number{
    private:
    int a,b;
    public:
    // void assign(int x,int y){
    //     a=x;
    //     b=y;
    // }
    //To assign value outside the class
    void assign(int,int);//Declare it
    void display(){
        cout<<"a= "<<a<<endl<<"b= "<<b;
    }
};
// void asign(int x, int y){
//     a=x;//not accesable as a and b are private so we use a membership label(Class name) and :: between return type and class name.
//     b=y;
// }
void Number::assign(int x, int y) {
    a=x;
    b=y;
}
int main(){
    Number n1;
    n1.assign(3,4);
    n1.display();
    return 0;
}