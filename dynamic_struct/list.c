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
    if (head)
    {
        printf("%d -> ",head->data);
        show_list(head->next);
    }
    else
    {
        putchar(10);
    }
}

int summa_nodes_list(struct item *head)
{
    return head ? head->data + summa_nodes_list(head->next) : 0;
}

int main(void)
{    
    int len;
    printf("Input length of  list: ");
    scanf("%d",&len);

    struct item *head = create_random_list(len);
    show_list(head);
    printf("Summa nodes = %d\n",summa_nodes_list(head));
    return 0;
}
