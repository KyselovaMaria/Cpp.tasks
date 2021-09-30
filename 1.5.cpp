#include <iostream>

using namespace std;

int main()
{
    float x, x1, x2, x3, x4, x5, x8, x24, x6, x16; 
    scanf("%f", &x); 
    x1 = x*x; //х в 2     a)    б)      в        г)        д)
    x2 = x1*x1; //x в 4   a)    б)      в)       г)        д)
    x3 = x1*x2; //х в 6         б)      в)
    x8 = x2*x2; //х в 8                          г)        д)
    x16 = x8*x8; //х в 16                        г)        д)
    x4 = x8*x; //x в 9                  в)
    x5 = x16/x; //x в 15                         г)
    x24= x8*x16;  //x в 24                                 д)
    x6= x24*x2;   //x в 28                                 д)
    printf("a)\n");
    printf("x^4=%e\n",x2);
    
    printf("б)\n");
    printf("x^6=%e\n",x3);
    
    printf("в)\n");
    printf("x^9=%e\n",x4);
    
    printf("г)\n");
    printf("x^15=%e\n",x5);
    
    printf("д)\n");
    printf("x^28=%e\n",x6);
    return 0;
}