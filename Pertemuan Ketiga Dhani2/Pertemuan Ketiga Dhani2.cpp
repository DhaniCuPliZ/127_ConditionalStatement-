#include <iostream>
using namespace std;

int main()
{
    srand(time(0));

    int nBilA, nBilB;

    string status;

    nBilA = rand() % 11;
    nBilB = rand() % 11;

    if (nBilA == nBilB) {
        status = "bilangannya sama";
    }
    else if (nBilA > nBilB) {
        status = "bilangan A lebih besar dari Bilangan B";
    }
    else
    {
        status = "Bilangan A lebih kecil dari bilangan B";
    }

    cout << "nilai A : " << nBilA << endl;
    cout << "nilai B : " << nBilB << endl;
    cout << status;


    return 0;
}
