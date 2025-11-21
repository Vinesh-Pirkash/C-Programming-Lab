#include <stdio.h>
#include <string.h>

int main() {
    char pass1[50], pass2[50];

    printf("Enter password: ");
    scanf("%s", pass1);

    printf("Confirm password: ");
    scanf("%s", pass2);

    if(strcmp(pass1, pass2) == 0)
        printf("Password Matched");
    else
        printf("Passwords do not match");

    return 0;
}
