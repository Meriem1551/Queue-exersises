#ifndef QUEUE2_H
#define QUEUE28_H
#include <stdio.h>
#include <stdlib.h>
typedef unsigned int gender;
typedef struct gender Gender;

/**
 * gender - struct contains men and women
 * @gender: name of man or woman
 * @next: pointer to the next node
 * @prev: pointer to the previous node
 */
struct gender
{
    char *gender;
    struct gender *next;
    struct gender *prev;
};
char *getChar(char *);
void push(Gender **, Gender **, char *);
void pairing_for_dance(Gender *, Gender *, Gender *, Gender *);
int num_unpairing(Gender *);
void pop(Gender *);
#endif