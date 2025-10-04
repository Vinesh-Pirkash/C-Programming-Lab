#include <stdio.h>

int main()
{

  int x, factorial = 1;
  printf("Enter a number to calculate the factorial: ");
  scanf("%d", &x);

  if (x < 0)
  {
    printf("Factorial of negative number is not defined");
  }
  else
  {
    for (int i = x; i >= 1; i--)
    {
      factorial *= i;
    }

    printf("\nThe Factorial of %d is: %d\n", x, factorial);
  }

  return 0;
}

