#include <iostream>
using namespace std;
int main()
{
    int p, t;
    cout << "Enter Principal amount: ";
    cin >> p;
    cout << "Enter Time(in years): ";
    cin >> t;
    if (t > 10)
    {
        cout << "Simple intrest is: ";
        cout << p * t * 8 / 100;
    }
    else
        cout << "Simple interest is: ";
    cout << p * 12 * t / 100;
    return 0;
}