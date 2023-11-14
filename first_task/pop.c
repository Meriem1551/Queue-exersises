#include "queue1.h"

/**
 * pop - delete a node
 * @t: pointer to last node
 * Return: void
 */

void pop(Queue *t)
{
    if (t == NULL)
        return;
    free(t);
}