#include <iostream>
#include <algorithm>

using namespace std;

/*A user inputs 10 integers (into a dynamic C++ array). Declare two pointers Pmax and Pmin and make them point to max and min values from the array.
Output min and max values and their memory addresses by using Pmax and Pmin.*/

int main()

{


    int arraysize = 10;
    int *integers;
    integers = new int [arraysize];
    cout << "Enter 10 integers: " << endl;

    /*User input 10 integers using for loop*/

    for(int i=0; i<arraysize; i++){
        cin>>integers[i];
    }


    /*Print array values*/
    for (int i = 0; i < arraysize; i++){
    cout << integers[i] << ", ";}
    cout << endl;


    /*Declared integer PMin*/
    int *PMin;
    PMin = new int;
    *PMin = integers[0];


    /*Declared integer PMAx*/
    int *PMax;
    PMax = new int;
    *PMax = integers[0];


    /*Using for loop to determine minimum value for loop will check every number in array and compare it with each other*/
    for(int q=0; q<arraysize; q++){
        if(integers[q] < *PMin){
            *PMin = integers[q];
        }
        }


    for(int x=0; x<arraysize; x++){
        if(integers[x] > *PMax){
            *PMax = integers[x];
        }
    }


    /* *PMin will print value of minimum value PMin will print out the value of memory location difference is just " * " before PMin */
    cout<< "Minimum value is: " << *PMin << endl;
    cout<< "Memory location of minimum value is: " << PMin << endl;

    cout<< "Maximum value is: " << *PMax << endl;
    cout<< "Memory location of maximum value is: " << PMax << endl;






    return 0;
}
