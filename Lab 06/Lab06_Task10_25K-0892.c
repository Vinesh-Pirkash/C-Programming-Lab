#include <stdio.h>

int main()
{

  int x,sum = 0;
  char ch = 'y';
  
  while(ch == 'y' || ch == 'Y'){
    printf("\nEnter a number: ");
    scanf("%d", &x);
    
    sum += x;
    printf("Running sum of numbers: %d\n",sum);
    

    printf("Do you want to continue? (y for yes/n for no): ") ;
    scanf(" %c",&ch);
  }

  printf("\nFinal sum of all numbers entered: %d\n", sum);
  
  return 0;
}