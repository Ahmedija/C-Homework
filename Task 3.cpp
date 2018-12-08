#include <iostream>

using namespace std;

int main()
{
    int a;

    string b;

    int n;



    cout << "Input the height of triangle." << endl;
    cin >>  a;


    cout << "Input the character you want to be printed." << endl;
    cin >>  b;

    for(int i=0; i<a; i++){

        for(int j=0; j<=i; j++){
            cout << b;

        }cout << "\n";
    }

    for(int z=a; z>=0; z--){
        for(int x=0; x<=z; x++){
            cout << b;

        }cout << "\n";
    }


    return 0;
}
