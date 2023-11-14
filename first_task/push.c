#include "queue1.h"
/**
 * push - add node at the beginning of a queue
 * @Q: pointre to pointer to queue
 * @num: integer
 * @tail: pointer to the last node
 * Return: void
 */

void push(Queue **Q, Queue **tail, int n)
{
    Queue *new = (Queue *)malloc(sizeof(Queue));
    if (new == NULL)
        return;
    new->num = n;
    new->next = NULL;
    new->prev = NULL;
    if (*Q == NULL)
    {
        *Q = new;
        *tail = new;
    }
    else
    {
        new->next = *Q;
        (*Q)->prev = new;
        *Q = new;
    }
}