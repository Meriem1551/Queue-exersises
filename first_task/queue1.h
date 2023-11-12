#ifndef QUEUE1_H
#define QUEUE1_H

#include <stdio.h>
#include <stdlib.h>
typedef struct queue Queue;
typedef unsigned int positif;
/**
 * queue - struct
 * @num: integer
 * @next: pointer to s struct
 */
struct queue
{
    int num;
    struct queue *next;
};

void push(Queue **, int);

#endif