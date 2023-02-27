#include "main.h"
/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: char to check
 * @src: char to check
 * Return: 0 is success
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0 ;
    int count = 0 ;
    while(src[i] != '\0')
    {
        i++;
        count++;
    }
    for(int i  =0 ;i < count ; i ++)
    {
       dest[i] = src[i] ;

    }
    return dest;

}
