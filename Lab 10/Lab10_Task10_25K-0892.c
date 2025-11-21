#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20];
    char search[20];
    char temp[20];
    int i, found = 0;
    FILE *fp;

    for(i = 0; i < 5; i++) {
        printf("Enter name %d: ", i+1);
        scanf("%s", names[i]);
    }

    fp = fopen("names.txt", "w");
    for(i = 0; i < 5; i++)
        fprintf(fp, "%s\n", names[i]);
    fclose(fp);

    printf("Enter name to search: ");
    scanf("%s", search);

    fp = fopen("names.txt", "r");
    while(fscanf(fp, "%s", temp) != EOF) {
        if(strcmp(temp, search) == 0) {
            found = 1;
            break;
        }
    }
    fclose(fp);

    if(found)
        printf("Name found in directory");
    else
        printf("Name not found");

    return 0;
}
