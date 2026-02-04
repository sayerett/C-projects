#include <stdio.h>

int main()
{
  int side1, side2;

  printf("Input Side 1: "); // prompt the user to input the first side
  scanf("%d", &side1); // read the first side from the user

  printf("Input Side 2: "); // prompt the user to input the second side
  scanf("%d", &side2); // read the second side from the user

  // loop over the rows of the rectangle
  for (int i = 0; i < side1; i++) 
  { 
    // loop over the columns of the rectangle
    for(int j = 0; j < side2; j++)
    { 
      printf("* "); // print * at each position
    }
    printf("\n"); // move to the next row
  }
}
