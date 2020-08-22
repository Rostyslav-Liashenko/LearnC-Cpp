#include <stdio.h>
#include <malloc.h>

struct item
{
    int data;
    struct item *next;
};

struct item *int_array_to_list(int *arr, int len)
{
    struct item *first, *tmp;
    first = NULL;
    for(int i = len - 1; i >= 0; i--)
    {
        tmp = malloc(sizeof(struct item));
        tmp->data = arr[i];
        tmp->next = first;
        first = tmp;
    }
    return first;
}

int int_list_sum(const struct item *lst)
{
    int sum = 0;
    for(; lst; lst = lst->next)
        sum += lst->data;
    return sum;
}

void delete_int_list(struct item *lst)
{
    while(lst)
    {
        struct item *tmp = lst;
        lst = lst->next;
        free(tmp);
    }
}

int main(void)
{

    return 0;
}
