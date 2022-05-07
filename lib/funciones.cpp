#include "funciones.h"

char * my_strcpy(char * destino, const char * fuente)
{
    char * p = destino;

    while(*fuente)
    {
        *destino = *fuente;

        destino++;
        fuente++;
    }

    *destino = '\0';

    return p;
}

char * my_strcat(char * destino, const char * fuente)
{
    char * p = destino;

    while(*destino)
    {
        destino++;
    }

    while(*fuente)
    {
        *destino = *fuente;
        destino++;
        fuente++;
    }

    *destino = '\0';

    return p;
}

int my_strlen(char * str)
{
    unsigned i = 0;
    while(*str)
    {
        str++;
        i++;
    }

    return i;
}

