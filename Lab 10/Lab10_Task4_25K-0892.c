#include <stdio.h>
#include <stdlib.h> // Required for exit()

int main() {
    FILE *fptr;
    int ids[3]; 
    int readIds[3]; 
    int i;


    fptr = fopen("library.txt", "w");

    if (fptr == NULL) {
        printf("Error: Could not create or open file.\n");
        exit(1); 
    }

    printf("--- Library Data Entry ---\n");
    for (i = 0; i < 3; i++) {
        printf("Enter Book ID %d: ", i + 1);
        scanf("%d", &ids[i]);
    }

    for (i = 0; i < 3; i++) {
        fprintf(fptr, "%d\n", ids[i]);
    }

    printf("Data successfully written to library.txt.\n");

    fclose(fptr);


    printf("\n--- Reading Data from File ---\n");

    fptr = fopen("library.txt", "r");

    if (fptr == NULL) {
        printf("Error: Could not open file for reading.\n");
        exit(1);
    }

    printf("The Book IDs retrieved from the file are:\n");
    
    for (i = 0; i < 3; i++) {
        fscanf(fptr, "%d", &readIds[i]); 
        printf("ID: %d\n", readIds[i]);
    }

    fclose(fptr);

    return 0;
}