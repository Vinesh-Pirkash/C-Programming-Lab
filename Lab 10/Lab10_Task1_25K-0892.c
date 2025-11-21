#include <stdio.h>
#include <string.h> 

int main() {
    char msg[100]; 
    char code[50];
    
    printf("Enter the msg: ");
    fgets(msg, sizeof(msg), stdin);
    msg[strcspn(msg, "\n")] = '\0';

    printf("Enter the code word to add: ");
    scanf("%s", code);

    strcat(msg, code);
    
    printf("\nMessage: %s\n", msg);

    int len = strlen(msg) - strlen(code);

    printf("Length of the message: %d\n", len);

    return 0;
}