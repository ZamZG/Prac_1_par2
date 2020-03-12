#include <iostream>
using namespace std;


int main ()
    {
    int VaLocal = 5;
    int *apLocal = &VaLocal;
    int *apHead = new int;


    *apHead = 7;
    cout << "VaLocal: " << VaLocal << endl;
    cout << "*apLocal: " << *apLocal << endl;
    cout << "*apHead: " << *apHead << endl;

    delete apHead;
    apHead = new int;
    *apHead = 9;
    cout << "*apHead: " << *apHead << endl;
    delete apHead;
    return 0;

    }
