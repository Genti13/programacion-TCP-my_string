#ifndef CADENA_H_INCLUDED
#define CADENA_H_INCLUDED

#include <iostream>
#define MAX 50

class String
{
private:
    char * str;
public:
    String();
    String(char * str);
    String(const String&);


    String operator+(const String& str) const;
    String& operator=(const String& str);

    friend std::ostream& operator<< (std::ostream& os, const String& str);

    ~String();
};



#endif // CADENA_H_INCLUDED
