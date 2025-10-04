#include <stdio.h>

int main(){
    int x, y, z;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Enter third number: ");
    scanf("%d", &z);

    x>y ? (x>z ? (printf("%d is Maximum number",x)):(printf("%d is Maximum number",z))):(y>z ? (printf("%d is Maximum number",y)):(printf("%d is Maximum number",z)));


    return 0;
}