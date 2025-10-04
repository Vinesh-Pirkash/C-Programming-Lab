#include <stdio.h>

int main() {
    int x;
    int evenCount = 0, oddCount = 0;
    char ch = 'y';

    do {
        printf("Enter a number: ");
        scanf("%d", &x);

        if (x & 1) {
            printf("%d is Odd.\n", x);
            oddCount++;
        } else {
            printf("%d is Even.\n", x);
            evenCount++;
        }
 
        printf("Do you want to continue? (y for yes / n for no): ");
        scanf(" %c", &ch);  

    } while (ch == 'y' || ch == 'Y');

    printf("\nTotal Even numbers entered: %d\n", evenCount);
    printf("Total Odd numbers entered: %d\n", oddCount);

    return 0;
}
