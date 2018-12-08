#include <iostream>

using namespace std;

int main()
{

    int a, b, c, mult, add;

    cout << "Input first integer: " << endl;
    cin >> a;

    cout << "Input second integer: " << endl;
    cin >> b;

    cout << "Input third integer: " << endl;
    cin >> c;


    mult= a*b*c;
    cout<< "Multiplied numbers result: "<< endl;
    cout<< mult<< endl;

    add= a+b+c;
    cout<< "Sum of numbers result: "<< endl;
    cout<< add;


    return 0;
}
