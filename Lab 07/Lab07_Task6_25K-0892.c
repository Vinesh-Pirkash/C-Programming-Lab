#include <stdio.h>

int main() {
    int numbers[5];
    int add[5], sub[5], mul[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) {
        add[i] = numbers[i] + 10;
        sub[i] = numbers[i] - 5;
        mul[i] = numbers[i] * 2;
    }

    printf("\n    Results:   \n");
    for (i = 0; i < 5; i++) {
        printf("Original: %d ,  +10: %d ,  -5: %d ,   x2: %d\n", numbers[i], add[i], sub[i], mul[i]);
    }

    return 0;
}
