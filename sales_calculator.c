#include <stdio.h>

int main (void) {
  int product_number, quantity_sold;
  float total = 0.0;

  // Loop until user enters -1
  while(1) {
    printf("Enter product number (-1 to end): ");
    scanf("%d", &product_number);

    if (product_number == -1) // If user enters -1, break out of the loop
    { 
      break;
    }

    printf("Enter quantity sold: ");
    scanf("%d", &quantity_sold);

    switch (product_number) // Switch statement to calculate total based on product number
    {
    case 1:
      total += quantity_sold * 2.98;
      break;

    case 2:
      total += quantity_sold * 4.50;
      break;

    case 3:
      total += quantity_sold * 9.98;
      break;

    case 4:
      total += quantity_sold * 4.49;
      break;

    case 5:
      total += quantity_sold * 6.87;
      break;
    
    default: // If an invalid product number is entered, display an error message
      printf("Invalid product number\n");
      break;
    }
  }

  printf("\nThe total retail value is %.2f", total); // Display the total value of all products sold
}
