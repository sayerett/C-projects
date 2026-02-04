#include<stdio.h>

int main() {
  float sales = 0;
  float salary;

  while (sales != -1) { // loop until sales is -1
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales); // read in the sales value

    if (sales == -1) { // if sales is -1, break out of the loop
      break;
    }

    salary = (0.09 * sales) + 200; // calculate the salary by giving them 200 dollars + 9% of their sales

    printf("Salary is: $%.2f\n\n", salary); // print out the calculated salary
  }
}
