#include "queue1.h"

/**
 * main - checks the code
 * Return: always 0
 */

int main(void)
{

    positif n_nodes, i;
    int number;
    Queue *q = NULL;
    Queue *tail = NULL;
    printf("How many nodes do you have? ");
    scanf("%u", &n_nodes);
    for (i = 0; i < n_nodes; i++)
    {
        printf("Enter num number %u ", i);
        scanf("%d", &number);
        push(&q, &tail, number);
    }
    print(tail);
    free(q);
    free(tail);
    return 0;
}