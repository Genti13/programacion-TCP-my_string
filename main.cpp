#include <iostream>
#include "class/Cadena.h"
using namespace std;

int main()
{
    String C1("Algo extranio pasaba");
    String C2("Pedro");
    String C3(NULL);

    cout <<"---"<<C1<<"---"<< endl;

    C1 = C2;
//
    cout <<"+++"<<C1<<"+++"<< endl;
//
    C3 = C1 + C2;
//
    cout <<">>>"<<C3<<"<<<"<< endl;

    return 0;
}
