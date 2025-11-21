#include <stdio.h>
#include <string.h> 

int main() {
    char word[50];
    char ch;
    char *res; 

   
    printf("Enter a word (without spaces): ");
    scanf("%s", word);

    while(getchar() != '\n'); 

    printf("Enter a single character to search for: ");
    scanf("%c", &ch);

    res = strchr(word, ch);

    if (res != NULL) {
        
        printf("Character '%c' found at position %d.\n", ch,res - word );
    } else {
        printf("Character not found.\n");
    }

    return 0;
}