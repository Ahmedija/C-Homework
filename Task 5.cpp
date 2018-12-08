#include <iostream>

using namespace std;

int main()
{

    int a;

    cout << "Enter integer" << endl;
    cin >> a;

    if(((a >> 3) << 3) == a){

        cout << "Number is divisible by 8.";

    }else{

        cout << "Number is not divisible by 8.";

    }



    return 0;
}
