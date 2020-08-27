#include <stdio.h>
#include <malloc.h>
#include <stdlib.h> /* rand() */
struct item 
{
    int data;
    struct item *next;
};

struct item *create_random_list(int count_node)
{
    struct item *head = NULL, *tmp;
    while (count_node)
    {
        tmp = malloc(sizeof(struct item));
        tmp->data = rand() % 10 + 1;
        tmp->next = head;
        head = tmp;
        count_node--;
    }
    return head;
}

void show_list(struct item *head)
{
    for(; head; head = head->next)
        printf("%d -> ",head->data);
    putchar(10);
}

int main(void)
{    
    int len;
    printf("Input length of  list: ");
    scanf("%d",&len);

    struct item *head = create_random_list(len);
    show_list(head);
    return 0;
}
