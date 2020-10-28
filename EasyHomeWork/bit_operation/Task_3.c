#include <stdio.h>
 
 int get_new_number(unsigned int x, int p, unsigned int y, int n){
     int l = (sizeof(x) << 3) - (n + p);
     int tmp = (((x >> p) << p) << l) >> l;  
    return (x ^ tmp) | (((y << p) << l) >> l);
}
 
int main(void){
    /* позиция з нуля, количество з 1 */
    /* test x = 100 y = 125 p = 0 n = 3 result = 101 */
    int x,y,p,n;
    printf("Input the x, y, p, n: ");
    scanf("%d%d%d%d",&x,&y,&p,&n);
    printf("result: %d\n", get_new_number(x, p, y, n));
    return 0;
}