#include <stdio.h>

int main(void)
{
  int num;

  printf("Enter five numbers between 1 and 30: ");

  // Loop 5 times to get 5 input numbers from user
  for (int i = 0; i < 5; i++)
  {
    // Get input number from user
    scanf("%d", &num);

    // Loop from 0 to input number and print * for each iteration
    for (int j = 0; j < num; j++)
    {
      printf("* ");
    }

    // Print newline character after each row of stars
    printf("\n");
  }
  return 0;
}
