#include <stdio.h>

int main()
{

  int x;
  int largest_no,smallest_no;
  char ch = 'y';
  int i =1;
  
  do{
    printf("\nEnter a number: ");
    scanf("%d", &x);

    if (i == 1){
      largest_no = x;
      smallest_no = x;
      i++;
    }

    if(x > largest_no){
      largest_no = x;
    }
    if(x < smallest_no){
      smallest_no = x;
    }
    printf("Largest Num: %d\n",largest_no);
    printf("Smallest Num: %d\n",smallest_no);

    printf("Do you want to continue? (y for yes/n for no): ") ;
    scanf(" %c",&ch);
  }while(ch == 'y' || ch == 'Y');

  printf("\nFinal Largest number entered: %d\n", largest_no);
  printf("Final Smallest number entered: %d\n", smallest_no);



  
  return 0;
}