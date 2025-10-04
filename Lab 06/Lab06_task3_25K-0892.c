#include <stdio.h>

int main() {
    int x,i=2;
    int next,first = 0 , second = 1,sum=0;
    printf("Enter a number: ");
    scanf("%d", &x);
    
    printf("%d ", first); 
    printf("%d ", second); 
    while(i<x){
        next = first + second;  
        printf("%d ", next);
        sum+=next;
        
        first = second;
        second = next;
        i ++;
    }
    printf("\nSum of series till %dth term: %d\n",x, sum);
    return 0;
}
