#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int numerator;
    unsigned int denominator;
} Rational;

int input(Rational* x){
    printf("Input numerator and denominator: ");
    scanf(" %d",&x->numerator);
    scanf(" %u",&x->denominator);
    return 0;
}

void vyvod(const Rational x){
    printf("R = %d / %u ",x.numerator,x.denominator);
}

Rational add(const Rational a, const Rational b){
    Rational c;
    c.numerator = (int)(a.numerator * b.denominator) + (int)(b.numerator * a.denominator);
    c.denominator = a.denominator * b.denominator;
    return c;
}

Rational mul(const Rational a, const Rational b){
    Rational c;
    c.numerator = a.numerator * b.numerator;
    c.denominator = a.denominator * b.denominator;
    return c;
}

bool cmp(const Rational a, const Rational b){
    return a.numerator*b.denominator > b.numerator*a.denominator;
}

bool equal(const Rational * a, const Rational * b){
    return a->numerator*b->denominator == b->numerator*a->denominator;
}

unsigned gcd(unsigned a, unsigned b){
    if(a==0) return b;
    if(b==0) return a;
    if(a>b) return gcd(b,a%b);
    else return gcd(a,b%a);
}

Rational reduce(const Rational x){
    unsigned d;
    if(x.numerator>=0) d = gcd(x.numerator, x.denominator);
    else d = gcd(-x.numerator, x.denominator);
    Rational z;

    z.numerator = (int)x.numerator / d;
    z.denominator = x.denominator / d;
    return z;
}

void reduce1(Rational* x){
    unsigned d = x->numerator>=0?gcd(x->numerator, x->denominator):gcd(-x->numerator, x->denominator);
    Rational z;
    x->numerator /= d;
    x->denominator /= d;
}

int main(){
    Rational x,y,z;
    input(&x);
    input(&y);
    vyvod(x);
    reduce1(&x);
    printf("\nIrreducible: \n");
    vyvod(x);
    printf("\n");
    printf("\n");
    vyvod(y);
    reduce1(&y);
    printf("\nIrreducible: \n");
    vyvod(y);
    z = add(x,y);
    reduce1(&z);
    printf("\nSum: ");
    vyvod(z);
    Rational z1=mul(x,y);
    printf("\nMultiplication: ");
    vyvod(reduce(z1));
    printf("\nComparison sum vs mult z>z1==%d\n",cmp(z,z1));
    
    //reduce1(&x);
    //printf("\nIrreducible =%d\n", vyvod(x);
   
}