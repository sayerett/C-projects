#include <stdio.h>

int main(void)
{
  // Declare all variables
  int account_num1, account_num2, account_num3, credit_limit1, credit_limit2, credit_limit3, current_balance1, current_balance2, current_balance3, new_credit_limit1, new_credit_limit2, new_credit_limit3;

  // First Customer
  printf("Enter the account number for the first customer: ");
  scanf("%d", &account_num1);

  printf("Enter the credit limit for the first customer: ");
  scanf("%d", &credit_limit1);

  printf("Enter the current account balance for the first customer: ");
  scanf("%d", &current_balance1);

  new_credit_limit1 = credit_limit1 / 2;

  printf("The new credit limit for the first customer is %d\n\n", new_credit_limit1);

  if (current_balance1 > new_credit_limit1) {
    printf("The first customer has exceeded their credit limit by %d\n\n", current_balance1 - new_credit_limit1);
  }

  // Second Customer
  printf("Enter the account number for the second customer: ");
  scanf("%d", &account_num2);

  printf("Enter the credit limit for the second customer: ");
  scanf("%d", &credit_limit2);

  printf("Enter the current account balance for the second customer: ");
  scanf("%d", &current_balance2);

  new_credit_limit2 = credit_limit2 / 2;

  printf("The new credit limit for the second customer is %d\n\n", new_credit_limit2);

  if (current_balance2 > new_credit_limit2) {
    printf("The second customer has exceeded their credit limit by %d\n\n", current_balance2 - new_credit_limit2);
  }

  // Third Customer
  printf("Enter the account number for the third customer: ");
  scanf("%d", &account_num3);

  printf("Enter the credit limit for the third customer: ");
  scanf("%d", &credit_limit3);

  printf("Enter the current account balance for the third customer: ");
  scanf("%d", &current_balance3);

  new_credit_limit3 = credit_limit3 / 2;

  printf("The new credit limit for the third customer is %d\n\n", new_credit_limit3);

  if (current_balance3 > new_credit_limit3) {
    printf("The third customer has exceeded their credit limit by %d\n\n", current_balance3 - new_credit_limit3);
  }
}