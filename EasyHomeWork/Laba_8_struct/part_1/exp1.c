#include <stdio.h>
#include <math.h>

struct point {
    int x,y;
};

struct point make_point(int a, int b) {
    struct point temp;
    temp.x = a;
    temp.y = b;
    return temp;
}

struct point add_point(struct point pt1, struct point pt2) {
    pt1.x += pt2.x;
    pt1.y += pt2.y;
    return pt1;
}

double dist(struct point pt0, struct point pt) {
    return sqrt(pow((pt0.x-pt.x),2) + pow((pt0.y-pt.y),2));
}

int pt_in_circ(int r, struct point pt1, struct point pt2) {
    return dist(pt1,pt2) <= r;
}

void print_coordinate(struct point pt) {
    printf("x = %d\n",pt.x);
    printf("y = %d\n\n",pt.y);
}

int main(void){
    int temp_a,temp_b;
    int rr;
    struct point pt1, pt2;
    printf("Coordinate pt1: ");
    scanf("%d%d",&temp_a,&temp_b);
    pt1 = make_point(temp_a,temp_b);
    printf("Coordinate pt2: ");
    scanf("%d%d",&temp_a,&temp_b);
    pt2 = make_point(temp_a,temp_b);
    printf("Input the radius: ");
    scanf("%d",&rr);
    printf("dist = %.2f\n",dist(pt1,pt2));
    if (pt_in_circ(rr,pt1,pt2))
        printf("Point in circle\n");
    else
        printf("Point out circle\n");
    printf("pt1\n");
    print_coordinate(pt1);
    printf("pt2\n");
    print_coordinate(pt2);
    printf("pt3 = pt1 + pt2\n");
    struct point pt3 = add_point(pt1,pt2);
    print_coordinate(pt3);
    printf("Author by Liashenko Rostyslav\n");
    return 0;
}