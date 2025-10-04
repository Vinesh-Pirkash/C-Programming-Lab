#include <stdio.h>

int main()
{
  int x;
  printf("Enter a integer for multiplication table: ");
  scanf("%d", &x);

  if (x < 0)
  {
    printf("Invalid Input,number should be positive");
  }
  else
  {
    for (int i = 1; i <= 10; i++)
    {
      printf("%d * %d = %d\n", x, i, x * i);
    }
  }
  return 0;
}
