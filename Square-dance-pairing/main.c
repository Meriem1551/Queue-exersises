#include "queue2.h"

/**
 * main - checks the code
 * Return: always 0
 */

int main(void)
{
    gender
        num_men,
        num_women;
    char
        *woman_name,
        *man_name;
    Gender
        *men = NULL,
        *women = NULL,
        *tailm = NULL,
        *tailw = NULL;
    int num_of_unpairing_men_women;

    printf("How many men in this party ");
    scanf("%u", &num_men);
    for (int i = 0; i < num_men; i++)
    {
        man_name = getChar("What's the name of this man");
        push(&men, &tailm, man_name);
    }
    printf("How many women in this party ");
    scanf("%u", &num_women);
    for (int i = 0; i < num_women; i++)
    {
        woman_name = getChar("What's the name of this man");
        push(&women, &tailw, woman_name);
    }
    pairing_for_dance(men, tailm, women, tailw);
    return 0;
}