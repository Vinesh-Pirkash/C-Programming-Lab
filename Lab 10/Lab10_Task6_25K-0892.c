#include <stdio.h>
#include <string.h>

int main() {
    char user1[50], user2[50];

    printf("Enter first username: ");
    scanf("%s", user1);

    printf("Enter second username: ");
    scanf("%s", user2);

    strcat(user1, " ");

    printf("Combined Username: %s", strcat(user1,user2));
    return 0;
}
