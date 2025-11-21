#include <stdio.h>
#include <string.h> 

int main() {
    char code1[100];
    char code2[100];
    int n;

    printf("Enter the first product code: ");
    scanf("%s", code1);
    printf("Enter the second product code: ");
    scanf("%s", code2);
    printf("Enter the number of characters to compare: ");
    scanf("%d", &n);

    if (n > strlen(code1) || n > strlen(code2)) {
        printf("The comparison will stop at the end of the shorter string, because one of the codes is shorter than %d characters\n\n" , n);
    }

    
    if (!(strncmp(code1, code2, n))) {
        printf("The first %d characters MATCH.\n", n);
        printf("These products belong to the same category.\n");
    } else {
        printf("The first %d characters DO NOT match.\n", n);
        printf("These products are in different categories.\n");
    }

    return 0;
}