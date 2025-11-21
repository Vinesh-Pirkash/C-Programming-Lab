#include <stdio.h>

int main() {
    char names[3][20];
    int i, j;

    for(i = 0; i < 3; i++) {
        printf("Enter name %d: ", i+1);
        scanf("%s", names[i]);
    }

    for(i = 0; i < 3; i++) {
        printf("Characters in Name %d:\n", i+1);
        for(j = 0; names[i][j] != '\0'; j++) {
            printf("%c ", names[i][j]);
        }
        printf("\n");
    }

    return 0;
}
