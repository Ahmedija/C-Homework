#include <iostream>

/*Create a program that asks a user to input 2 strings, X and Y. The program must then replace the values of X and Y, without using any additional variables as a temporary storage.
For example: if X = "string1" and Y = "string2", the end of the program should be something like "cout << X << ' ' << Y;" which would output "string2 string1".*/

using namespace std;

int main()
{
    string str1;
    string str2;

    /*User input strings*/
    cout << "Input string 1" << endl;
    cin >> str1;

    cout << "Input string 2" << endl;
    cin >> str2;

    /*I found online the swap function which is used for swapping the values of 2 variables without using third one*/
    std::swap(str1,str2);
    cout<< "Swapped values '" << str1 << " " << str2 << "'";

    return 0;
}
