#include "queue2.h"

/**
 * num_unpairing - print number of unpairing men or women
 * @p: pointer to the last node of a queue
 * Return: void
 */

int num_unpairing(Gender *p)
{
    Gender *tmp;
    int num_unpairing = 0;
    while (p != NULL)
    {
        tmp = p->prev;
        num_unpairing++;
        pop(p);
        p = tmp;
    }
    return (num_unpairing);
}