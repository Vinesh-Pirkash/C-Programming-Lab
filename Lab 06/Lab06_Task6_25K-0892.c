#include <stdio.h>

int main(){
  int x= 1,i=0;
  float sum = 0;
  int count7 = 0,count5_7=0,count0_5=0;

  while(x>= 0 && x<=100){
    printf("Enter the grade(Between 0 and 100) and -1 to stop: ");
    scanf("%d",&x);
    if(x == -1){
      break;
    }
    if(x < 0 || x > 100){
      printf("Invalid grade! Please enter between 0 and 100.\n\n");
      continue;
    }
    i++;
    printf("The grade of student %d is %d\n\n",i,x);
    
    if(x>70){
      count7++;
    }else if(x >= 50 && x <= 70){
      count5_7++;
    }else{
      count0_5++;
    }
    sum +=x;
  }
  
  if(i > 0){
    printf("\nNumber of grades above 70 : %d\n",count7);
    printf("Number of grades between 50 and 70 : %d\n",count5_7);
    printf("Number of grades below 50 : %d\n",count0_5);
    printf("The average grade of students is: %f",sum/i);
  }else{
    printf("No grades are entered");
  }

  return 0;
}