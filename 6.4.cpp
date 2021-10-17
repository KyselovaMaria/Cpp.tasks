#include <stdio.h>

unsigned byteReplace(unsigned n){
    unsigned m = sizeof(n)*8;
    unsigned m1 = m-8;
    return ((n&225)<<m1) | (n>>m1) | (((n>>8)<<(m1-8))>>8);
}
int main(){
  unsigned n;
  printf("Enter n:");
  scanf("%u",&n);
  printf("%x",byteReplace(0x11223344));
  printf("\n");
  printf("%x %x\n",n,byteReplace(n));
}