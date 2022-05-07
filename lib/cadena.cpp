#include "../class/Cadena.h"

#include "funciones.h"

String::String()
{
    str = new char[1];
    *str = '\0';
}

String::String(char * cad)
{

    if(cad == NULL)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[MAX];
        my_strcpy(str,cad);
        str[my_strlen(cad)] = '\0';
    }

}

std::ostream& operator<<(std::ostream& os, const String& cad)
{
    os << cad.str;

    return os;
}

String String::operator+(const String& cad) const
{
    String aux = new char[my_strlen(cad.str)];

    my_strcpy(aux.str, str);
    my_strcat(aux.str, cad.str);

    aux.str[my_strlen(cad.str) + my_strlen(str)] = '\0';

    return aux;
}

String& String::operator=(const String& cad)
{
    delete str;
    str = new char[MAX];

    my_strcpy(str,cad.str);

    return *this;
}

String::~String()
{
    delete(str);
}
