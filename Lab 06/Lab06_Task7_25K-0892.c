#include <stdio.h>

int main(){

  int balance = 5000;
  int transaction = 1;
  int d_count = 0,w_count = 0;
  
  while(transaction != 0){
    printf("\nEnter amount of transaction (positive for deposits, negative for withdrawals): ");
    scanf("%d",&transaction);

    if(transaction == 0){
      break;
    }
    if(transaction > 0){
      d_count++;
    }else if(transaction < 0){
      w_count++;
    }

    balance = balance + transaction;
    printf("Updated Balance: %d\n",balance);
  }

  printf("\nFinal Balance: %d\n",balance);
  printf("\nTotal Number of Deposits: %d\n",d_count);
  printf("\nTotal Number of Withdrawals: %d\n",w_count);

  return 0;
}