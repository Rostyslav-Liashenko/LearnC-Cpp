#include <stdio.h>
#include <malloc.h>

struct dbl_item
{
    double data;
    struct dbl_item *prev, *next;
};

int main(void)
{
    struct dbl_item *first = NULL;
    struct dbl_item *last = NULL;
    struct dbl_item *current = NULL;
    struct dbl_item *tmp;

    /* create list from begin */

    double x = 10.0;
    tmp = malloc(sizeof(struct dbl_item));
    tmp->data = x;
    tmp->prev = NULL;
    tmp->next = first;
    if (first)
        first->prev = tmp;
    else
        last = tmp;
    first = tmp;

    /* create list from end */

    tmp = malloc(sizeof(struct dbl_item));
    tmp->data = x;
    tmp->prev = last;
    tmp->next = NULL;
    if (last)
        last->next = tmp;
    else
        first = tmp;
    last = tmp;

    /* extract first nodes */

    if (first)
    {
        tmp = first;
        first = first->next;
        if (first)
            first->prev = NULL;
        else
            last = NULL;
        free(tmp);
    }

    /* extract last element list */

    if (last)
    {
        tmp = last;
        last = first->prev;
        if (last)
            last->next = NULL;
        else
        {
            first = NULL;
        }
        free(tmp);
    }

    /* delete all elements list */

    if (first)
    {
        first = first->next;
        while (first)
        {
            free(first->prev);
            first = first->next;
        }
        free(last);
        last = NULL;
    }

    /* insert element before current */
    tmp = malloc(sizeof(struct dbl_item));
    tmp->data = x;
    tmp->next = current;
    tmp->prev = current->prev;
    current->prev = tmp;
    if (tmp->prev)
        tmp->prev->next = tmp;
    else
        first = tmp;
    /* insert element after current */
    tmp = malloc(sizeof(struct dbl_item));
    tmp->data = x;
    tmp->prev = current;
    tmp->next = current->next;
    current->next = tmp;
    if (tmp->next)
        tmp->next->prev = tmp;
    else
        last = tmp;

    /* delete current element and new current rigth */
    if (current->prev)
        current->prev->next = current->next;
    else
        first = current->next;
    if (current->next)
        current->next->prev = current->prev;
    else
        last = current->prev;
    /* switch in code bottom, next to prev for left */
    tmp = current;
    current = current->next;
    free(tmp);
        
    return 0;
}