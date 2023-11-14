#ifndef QUEUE1_H
#define QUEUE1_H

#include <stdio.h>
#include <stdlib.h>
typedef struct queue Queue;
typedef unsigned int positif;

// defining doubly linkd list
/**
 * queue - struct
 * @num: integer
 * @next: pointer to struct (next node)
 * @prev: pointer to struct (previous node)
 */
struct queue
{
    int num;
    struct queue *next;
    struct queue *prev;
};

void push(Queue **, Queue **, int);
void print(Queue *);
void pop(Queue *);
#endif