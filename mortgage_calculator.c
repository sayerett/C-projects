#include<stdio.h>

int main() {
  int account_number = 0;
  int mortgage_amount;
  int mortgage_term;
  float interest_rate;
  int total_interest;
  int total_amount;
  int monthly_payment;

  while (account_number != -1) {  // Loop until account number is -1
    printf("Enter account number (-1 to end): ");
    scanf("%d", &account_number);

    if (account_number == -1) {  // Exit loop if account number is -1
      break;
    }

    printf("Enter mortgage amount (in dollars): ");
    scanf("%d", &mortgage_amount);

    printf("Enter mortgage term (in years): ");
    scanf("%d", &mortgage_term);

    printf("Enter interest rate (as a decimal): ");
    scanf("%f", &interest_rate);

    // Calculate total payable interest over the entire term
    total_interest = mortgage_amount * interest_rate * mortgage_term;
    
    // Add total payable interest to the original mortgage amount
    total_amount = total_interest + mortgage_amount;
    
    // Divide the total payable amount by the number of months in the term
    monthly_payment = total_amount / (mortgage_term * 12);

    printf("The monthly payable interest is: $ %d\n\n", monthly_payment, "\n");
    // Print the calculated monthly payment
  }
}
