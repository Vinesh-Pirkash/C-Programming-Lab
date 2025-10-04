#include <stdio.h>

int main() {
    int x;
    int sum = 0,count = 0;
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Prime numbers till %d are:\n", x);
     
    for(int i = 2; i <= x ; i++){
        int prime = 1;
        for(int j =2; j<=i-1;j++){
            if(i % j == 0){
                prime = 0;
                break;
            }
        }
        if(prime){
            printf("%d ", i);
            count++;
            sum+=i;
        }
    }

    printf("\nTotal prime numbers till %d: %d\n",x, count);
    printf("Sum of total prime numbers till %d: %d\n",x, sum);

    return 0;
}
