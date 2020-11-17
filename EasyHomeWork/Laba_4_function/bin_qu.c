#include <stdio.h>
#include <math.h>

/* boolean 1 - roots is it 0 - roots is not */


int roots_qu(double a, double b, double c, double *x1, double *x2) { 
    double d = pow(b,2) - 4 * a * c;
    if (d > 0) {
        *x1 = (-b + sqrt(d)) / (2.0 * a);
        *x2 = (-b - sqrt(d)) / (2.0 * a);
        return 1;
    } else {
        return 0;
    }
}

void roots_bin_qu(double a, double b, double c) {
    double t1,t2;
    if (roots_qu(a,b,c,&t1,&t2)) {
        if (t1 > 0) {
            double x = sqrt(t1);
            printf("x1 = %.2f x2 = %.2f\n",x,-x);
        }
        if (t2 > 0) {
            double x =sqrt(t2);
            printf("x3 = %.2f x4 = %.f\n",x,-x);
        }
    } else {
        printf("There is no root equation\n");
    }
    
}

int main(void) {
    double a,b,c;
    printf("Input the a, b, and c: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a == 0 || b == 0 || c == 0) {
        printf("Wrong input;");
        return 0;
    }
    roots_bin_qu(a,b,c);
    return 0;
}