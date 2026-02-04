#include <stdio.h>

int main()
{
  char fillCharacter; // variable to store the character that user inputs
  int side1, side2; // variables to store the side lengths

  printf("Enter the desired character: "); // prompt the user to input the fill character
  scanf("%s", &fillCharacter); // read the fill character from user input

  printf("Enter the length of side 1: "); // prompt the user to input the length of side 1
  scanf("%d", &side1); // read the length of side 1 from user input

  printf("Enter the length of side 2: "); // prompt the user to input the length of side 2
  scanf("%d", &side2); // read the length of side 2 from user input

  // loop through the rows of the rectangle
  for (int i = 0; i < side1; i++) {
    // loop through the columns of the rectangle
    for(int j = 0; j < side2; j++) {
      printf("%c ", fillCharacter); // print the fill character with a space after it
    }
    printf("\n"); // start a new line after each row
  }
}
