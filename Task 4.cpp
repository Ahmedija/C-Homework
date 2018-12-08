#include <iostream>

using namespace std;

int main()
{
    int num, resDivisible;
    double resNotDivisible;

    cout << "Enter number to check is it divisible by 3:" << endl;
    cin>> num;
    int numm = num;

    if(num%3==0){

        resDivisible=numm/3;
        cout<< "Number is divisible by 3, result is: " << resDivisible << endl;


    }else{

        resNotDivisible=numm/3;
        cout<< "Number is not divisible by 3, result is: " << resNotDivisible <<endl;
    }



    return 0;
}
