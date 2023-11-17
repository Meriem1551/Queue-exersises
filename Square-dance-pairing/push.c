#include "queue2.h"

/**
 * push - add node at the beginning of a queue
 * @m: pointer to the first node
 * @t: pointer to the last node
 * @name: pointer to a string
 * Return: void
 */

void push(Gender **g, Gender **t, char *name)
{
    Gender *new = (Gender *)malloc(sizeof(Gender));
    if (new == NULL)
        return;
    new->gender = name;
    new->next = NULL;
    new->prev = NULL;
    if (*g == NULL)
    {
        *g = new;
        *t = new;
    }
    else
    {
        new->next = *g;
        (*g)->prev = new;
        (*g) = new;
    }
}