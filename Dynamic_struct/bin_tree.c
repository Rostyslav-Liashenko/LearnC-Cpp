#include <stdio.h>

struct node
{
    int val;
    struct node *left, *right;
};

void int_bin_tree_add(struct node **root, int n)
{
    if (!*root)
    {
        *root = malloc(sizeof(**root));
        (*root)->val = n;
        (*root)->left = NULL;
        (*root)->right = NULL;
        return;
    }
    if ((*root)->val == n)
        return;
    if (n < (*root)->val)
        int_bin_tree_add(&(*root)->left,n);
    else
        int_bin_tree_add(&(*root)->right,n);
    
}

void int_bin_tree_print_rec(struct node *r) /* r = root */
{
    if (!r)
        return ;
    int_bin_tree_print_rec(r->left);
    printf("%3d", r->val);
    int_bin_tree_print_rec(r->right);
}

int main(void)
{
    return 0;
}
