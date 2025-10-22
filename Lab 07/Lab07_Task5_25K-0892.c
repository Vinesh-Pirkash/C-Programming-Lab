#include <stdio.h>

int main() {
    int grades[10];
    
    int i;
    for (i = 0; i < 10; i++) {
      printf("Enter the Grade of student %d: ", i + 1);
      scanf("%d", &grades[i]);
    }
    
    printf("\n     Grades    \n");
    for (i = 0; i < 10; i++) {
      printf("Grade of Student %d: %d\n", i + 1, grades[i]);
    }
    
    int sum = 0;
    float average;
    for (i = 0; i < 10; i++) {
      sum += grades[i];
    }
    average = sum / 10;
  

    int highestIndex = 0, lowestIndex = 0;
    for (i = 1; i < 10; i++) {
        if (grades[i] > grades[highestIndex])
            highestIndex = i;
        if (grades[i] < grades[lowestIndex])
            lowestIndex = i;
    }

    printf("\nClass average grade: %.f\n", average);
    printf("Highest grade: %d (Student %d)\n", grades[highestIndex], highestIndex + 1);
    printf("Lowest grade: %d (Student %d)\n", grades[lowestIndex], lowestIndex + 1);

    printf("\nEnter new grade for Student %d: ", lowestIndex + 1);
    scanf("%d", &grades[lowestIndex]);

    printf("\nUpdated list of grades:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i + 1, grades[i]);
    }

    return 0;
}
