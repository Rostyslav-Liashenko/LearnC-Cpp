#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct point {
    int x,y;
};

struct rect {
    point pt1, pt2;
};

struct circle {
    point pt;
    int r;
};

union Figure {
    point P;
    rect R;
    circle C;
};

int main(void) {
    srand(time(NULL));
    Figure tag;
    //Point
    puts("Enter the coordinate point: ");
    scanf("%d%d",&tag.P.x,&tag.P.y);
    printf("Point x = %d y = %d\n",tag.P.x,tag.P.y);
    //Circle
    tag.C.pt.x = tag.P.x;
    tag.C.pt.y = tag.P.y;
    puts("Vvedi radius");
    scanf("%d",&tag.C.r);
    printf("Circle r = %d center: x = %d y = %d",tag.C.r,tag.C.pt.x,tag.C.pt.y);
    //Rectangle
    tag.R.pt1.x = tag.P.x;
    tag.R.pt1.y = tag.P.y;
    tag.R.pt2.x = rand() % 20;
    tag.R.pt2.y = rand() % 20;
    printf("\nRec pt1: x = %d, y = %d pt2: x = %d,y = %d\n",tag.R.pt1.x,tag.R.pt1.y,tag.R.pt1.x,tag.R.pt2.y);
    return 0;
}

