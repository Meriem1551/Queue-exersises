#include "queue1.h"
/**
 * push - add node at the beginning of a queue
 * @Q: pointre to pointer to queue
 * @num: integer
 * Return: void
 */

void push(Queue **Q, int n)
{
    Queue *new = (Queue *)malloc(sizeof(Queue));
    if (new == NULL)
        return;
    new->num = n;
    new->next = NULL;
    if (*Q == NULL)
        *Q = new;
    else
    {
        new->next = *Q;
        *Q = new;
    }
}