#include <stdio.h>

int main () {
  // Declare variables to hold the principal, interest rate, loan term, and interest charge
  float principal = 0;
  float rate;
  int days;
  float interest;

  // Start a loop that will continue until the user enters -1 for the principal
  while (principal != -1) {
    // Prompt the user to enter the loan principal and store the value in the principal variable
    printf("Enter loan principal (-1 to end): ");
    scanf("%f", &principal);

    // If the user enters -1 for the principal, break out of the loop
    if (principal == -1) {
      break;
    }

    // Prompt the user to enter the interest rate and store the value in the rate variable
    printf("Enter interest rate: ");
    scanf("%f", &rate);

    // Prompt the user to enter the loan term in days and store the value in the days variable
    printf("Enter term of the loan in days: ");
    scanf("%d", &days);

    // Calculate the interest charge using the formula: principal * rate * days / 365
    interest = principal * rate * days / 365;

    // Print the interest charge to two decimal places
    printf("The interest charge is $%.2f\n\n", interest);
  }
}
