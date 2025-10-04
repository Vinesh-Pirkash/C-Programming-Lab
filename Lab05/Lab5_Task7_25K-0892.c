#include <stdio.h>

int main(){
    
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Sum of numbers: %d\n", a+b);
    printf("Difference between a and b: %d\n", a-b);
    printf("Product of numbers: %d\n", a*b);
    printf("Quotient of a and b: %d\n", a/b);
    printf("Remainder when a is divided by b: %d\n", a%b);



    return 0;
}