#include "queue2.h"

/**
 * getChar - read string from users
 * @s: message to print
 * Return: pointer to a string
 */

char *getChar(char *s)
{
    char *name = malloc(100);
    if (name == NULL)
        return NULL;
    puts(s);
    scanf(" %99[^\n]", name);
    return name;
}