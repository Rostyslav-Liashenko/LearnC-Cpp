#include <stdio.h>
#include <malloc.h>

struct item
{
    int data;
    struct item *next;
};

struct item *int_array_to_list(int *arr, int len)
{
    struct item *tmp;
    if (!len)
        return NULL;
    tmp = malloc(sizeof(struct item));
    tmp->data = *arr;
    tmp->next = int_array_to_list(arr+1,len - 1);
    return tmp;
}

int int_list_sum(const struct item *lst)
{
    return lst ? lst->data + int_list_sum(lst->next) : 0;
}

int main(void)
{
    return 0;
}
