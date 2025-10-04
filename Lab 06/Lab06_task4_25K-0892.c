#include <stdio.h>

int main() {
    char x;
    int v_count = 0, c_count = 0;
    char ch = 'y';

    do {
        printf("Enter a alphabet: ");
        scanf(" %c", &x);

        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'||x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
            v_count++;
        } else {
            c_count++;
        }
 
        printf("Do you want to continue? (y for yes / n for no): ");
        scanf(" %c", &ch);  

    } while (ch == 'y' || ch == 'Y');
    printf("\nTotal numbers of vowels entered: %d\n", v_count);
    printf("Total numbers of consonants entered: %d\n", c_count);
    return 0;
}
