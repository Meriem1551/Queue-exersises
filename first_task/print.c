#include "queue1.h"

/**
 * print - prints a queue
 * @t: pointer to queue (previous node)
 * Return: void
 */

void print(Queue *t)
{
    Queue *tmp, *ptr;
    if (t == NULL)
        return;
    while (t != NULL)
    {
        tmp = t->prev;
        printf("%d\n", t->num);
        pop(t);
        t = tmp;
    }
}