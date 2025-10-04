#include <stdio.h>

int main(){

   int a,b;
   printf("Enter a: ");
   scanf("%d", &a);
   printf("Enter b: ");
   scanf("%d", &b);

   printf("a & b (Bitwise AND): %d\n", a&b);
   printf("a | b (Bitwise OR): %d\n", a|b);
   printf("a ^ b (Bitwise XOR): %d\n", a^b);
   printf("~a (Bitwise NOT): %d\n", ~a);
   printf("~b (Bitwise NOT): %d\n", ~b);
   printf("a << 1 (Shift left): %d\n", a<<1);
   printf("a >> 1 (Shift right): %d\n", a>>1);
   printf("b << 1 (Shift left): %d\n", b<<1);
   printf("b >> 1 (Shift right): %d\n", b>>1);

   return 0;
}