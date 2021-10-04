#include <stdio.h> 
#include <math.h>
using namespace std;

int main()
{   
    
    
    int x,a,b,c; 
    scanf("%d",&x);
    a=x%10;
    b=(x/10)%10;
    c=(x/100)%10;
    //printf("%f", a);
    if (a!=b!=c)
        printf("%d\n", a*100+b*10+c);
        printf("%d\n", a*100+c*10+b);
        printf("%d\n", c*100+a*10+b);
        printf("%d\n", b*100+a*10+c);
        printf("%d\n", b*100+c*10+a);
        
    return 0;
}
