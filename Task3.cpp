#include <iostream>

using namespace std;

/*A user inputs two integers: A and B. The program should output: (1) Memory locations of both A and B.*/

int main()
{

    int a =0;
    int b =0;


    /*Integer a and b is requested by user*/
    cout << "Enter integer A" << endl;
    cin >> a;

    cout << "Enter integer B" << endl;
    cin >> b;

    /*Using & command and name of variable will result the memory location */

    cout << "Memory location of integer A is : " << &a << ", and memory location of integer B is : " << &b;

    return 0;
}
