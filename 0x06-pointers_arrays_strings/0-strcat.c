#include"main.h"
#include <stdio.h>


/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src) {
    char *p = dest + strlen(dest);
    while (*src != '\0') {
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}
