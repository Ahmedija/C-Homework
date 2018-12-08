#include <iostream>

using namespace std;

int main()
{

    int a;

    cout << "Input the number of stars you want to print" << endl;
    cin >>  a;

    char a2;
    a2=a;



    if(a<=0){

        cout << "Please input integer bigger than 0.";

    }else{

        for(int i=0; i<a; i++){
            cout<<"*";
    }
    }

    return 0;
}
