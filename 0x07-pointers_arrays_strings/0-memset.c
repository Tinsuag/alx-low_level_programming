#include "main.h"
/**
 * 
*/
char *_memset(char *s, char b, unsigned int n)
{
    for (unsigned int i=0; i<n;n++){
        printf(s[i]=b,"\n");
    }
    return s;
}