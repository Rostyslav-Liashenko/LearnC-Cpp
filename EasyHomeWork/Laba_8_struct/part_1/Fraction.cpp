#include <stdio.h>

struct fraction {
	long whole;
	unsigned int fractional; 
};

void create(fraction *fr) {
	printf("Input the whole: ");
	scanf("%ld",&fr->whole);
	printf("Input the fractional: ");
	scanf("%d",&fr->fractional);
}

void out(fraction fr) {
	printf("%ld/%d\n",fr.whole,fr.fractional);
}

void reverse(fraction *fr) {
	int tmp = fr->whole;
	fr->whole = fr->fractional;
	fr->fractional = tmp;
}

 long FindNSD(long a, long b) {
        while (a != b) {
            if (a > b)
                a -= b;
            else 
                b -= a;
        }       
        return a;
} 

void reduce(fraction *fr) {
	long nsd = FindNSD(fr->whole,fr->fractional);
	fr->whole /= nsd;
	fr->fractional /= nsd;
}

double convert_dec(fraction fr) {
	return (double) fr.whole / fr.fractional;
}

int main(void) {
	fraction num;
	create(&num);
	out(num);
	printf("After reverse:\n");
	reverse(&num);
	out(num);
	printf("After reduce:\n");
	reduce(&num);
	out(num);
	printf("Fraction to decaimal = %.4lf\n",convert_dec(num));
	printf("Create by Liashenko Rostyslav\n");
	return 0;
}
