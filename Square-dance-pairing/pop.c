#include "queue2.h"

/**
 * pop - delete a node
 * @p: pointer to the node we want to delete
 * Return: void
 */

void pop(Gender *p)
{
    if (p == NULL)
        return;
    free(p);
}
