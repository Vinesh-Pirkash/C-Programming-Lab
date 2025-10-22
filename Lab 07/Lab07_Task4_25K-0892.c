#include <stdio.h>

int main()
{
  int scores[10];
  int i, j, temp;

  for (i = 0; i < 10; i++)
  {
    printf("Enter Score of Student %d: ", i + 1);
    scanf("%d", &scores[i]);
  }
  for (i = 0; i < 9; i++)
  {
    for (j = 0; j < 10 ; j++)
    {
      if (scores[j] > scores[j + 1])
      {
        temp = scores[j];
        scores[j] = scores[j + 1];
        scores[j + 1] = temp;
      }
    }
  }

  float median = (scores[10 / 2 - 1] + scores[10 / 2]) / 2.0;

  printf("Sorted scores: ");
  for (i = 0; i < 10; i++)
  {
    printf("%d ", scores[i]);
  }

  printf("\nMedian score: %f\n", median);

  return 0;
}