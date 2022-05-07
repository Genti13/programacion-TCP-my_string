#include <iostream>
#include "class/Cadena.h"
using namespace std;

int main()
{
//    String C1("Hola: ");
//    String C2("Pedro");
//    String C3(NULL);
//
//    cout <<"---"<<C2<<"---"<< endl;
//
//    C2 = C1;
//
//    cout <<"+++"<<C2<<"+++"<< endl;
//
//    C3 = C1 + "A Todos";
//
//    cout <<">>>"<<C3<<"<<<"<< endl;

    String c1("Hola");
    cout << "c1: " << c1 << endl;

    String c2(c1);
    cout << "c2: " << c2 << endl;

    String c3;
    c3 = c1 + " Mundo";
    cout << "c3: " << c3 << endl;

    cout << "Resumen:" << endl;
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "c3: " << c3 << endl;

    return 0;


}
