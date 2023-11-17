#include "queue2.h"

/**
 * pairing_for_dance - make each man dance with a woman
 * @hm: pointer to first node of men's queue
 * @tm: pointer to last node of men's queue
 * @hw: pointer to first node of women's queue
 * @tw: pointer to last node of women's queue
 * Return: void
 */

void pairing_for_dance(Gender *hm, Gender *tm, Gender *hw, Gender *tw)
{
    Gender *tmpm, *tmpw;
    if (hm == NULL || hw == NULL)
        return;
    while (tm != NULL && tw != NULL)
    {
        tmpm = tm->prev;
        tmpw = tw->prev;
        printf("Male dancer is: %s and Femal dancer is: %s \n", tm->gender, tw->gender);
        pop(tm);
        pop(tw);
        tm = tmpm;
        tw = tmpw;
    }
    if (tw == NULL && tm != NULL)
    {
        printf("There are %d male dancers waiting to dance\n", num_unpairing(tm));
    }
    else
    {
        if (tm == NULL && tw != NULL)
        {
            printf("There are %d female dancers waiting to dance\n", num_unpairing(tw));
        }
    }
}