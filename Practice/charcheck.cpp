// Find if a character is an alphabet or not
// #include<iostream>
// #include<cctype>
// using namespace std;
// int main(){
//     char c;
//     cin>>c;
//     if(isalpha(c)){//isalpha is under cctype lib where we can check weather it is alphabet or not
//         cout<<"Alphabet";
//     }
//     else{
//         cout<<"Not Alphabet";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a Character: ";
    cin>>c;
    if(c>='a'&&c<='z'){
        cout<<"It is Lowercase Alphabet";
    }
    else if(c>='A'&&c<='Z'){
        cout<<"It is Uppercase Alphabet";
    }
    else if(c>='0'&&c<='9'){
        cout<<"It is a Number";
    }
    else{
        cout<<"Special Character";
    }
    return 0;
}
