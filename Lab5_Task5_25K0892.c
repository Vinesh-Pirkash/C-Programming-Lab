#include <stdio.h>

int main (){
    int course ;
    char g;
    printf("Enter the course number(1,2,3): ");
    scanf("%d",&course);
    
    switch (course)
    {
    case 1:
    case 2:
    case 3:
         printf("Enter the grade for course %d: ",course);
         scanf(" %c", &g);
         switch (g)
         {
            case 'A':
            case 'a':
              printf("Excellent! you got A Grade in course %d",course);
              break;
            case 'B':
            case 'b':
              printf("Good Job! you got B Grade in course %d",course);
              break;
            case 'C':
            case 'c':
              printf("You got C grade in course %d.Not bad but little bit more efforts are needed ",course);
              break;
            case 'D':
            case 'd':
              printf("You got D grade in course %d.Try to improve",course);
              break;
            case 'E':
            case 'e':
              printf("Your passed the course %d with E grade.Work Hard!", course);
              break;
            case 'F':
            case 'f':
              printf("Sorry! You failed the course %d",course);
              break; 
        
        default:
              printf("Enter appropriate grade");
              break;
        }
        break;
        default:
            printf("Enter Valid course number");
            break;
    }
    return 0;
}