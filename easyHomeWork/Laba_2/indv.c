#include <stdio.h>

int main(void)
{
    int a,b;
    char op,ch;
    m1:
    printf("Input two number: ");
    scanf("%d%d",&a,&b);
    getchar(); /* cleaning stream */
    printf("Input the operationc + - * / %%\n");
    scanf("%c",&op);
    switch (op)
    {
    case '+':
        printf("%d + %d = %d\n",a,b,a+b);
        break;
    case '-':
        printf("%d - %d = %d\n",a,b,a-b);
        break;
    case '*':
        printf("%d * %d = %d\n",a,b,a*b);
        break;
    case '/':
        printf("%d / %d = %.4f\n",a,b,(double) a / b);
        break;
    case '%':
        printf("%d %% %d = %d\n",a,b,a % b);
        break;
    default:
        printf("Operation not found\n");
        break;
    }
    getchar(); /* cleaning stream */
    printf("Repeat? [y/n]\n");
    scanf("%c",&ch);
    getchar(); /* cleaning stream */
    if (ch != 'n')
    {
        goto m1;   
    } 
    printf("Виконав Ляшенко Ростислав ПСК-18\n");   
    return 0;
}