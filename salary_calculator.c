#include<stdio.h>

int main (void) {
  int hours_worked = 0; // initialize hours worked to 0
  float hourly_rate; // declare hourly rate as a float
  float salary; // declare salary as a float

  while (hours_worked != -1) { // loop until hours worked is -1
    printf("Enter # of hours worked (-1 to end): "); // prompt the user to enter hours worked
    scanf("%d", &hours_worked); // read in the hours worked input

    if (hours_worked == -1) { // if hours worked is -1, exit the loop
      break;
    }

    printf("Enter hourly rate of the worker ($00.00): "); // prompt the user to enter hourly rate
    scanf("%f", &hourly_rate); // read in the hourly rate input

    salary = hours_worked * hourly_rate; // calculate salary based on hours worked and hourly rate

    if (hours_worked > 40) { // if hours worked is over 40, add overtime pay
      salary = salary + (hours_worked - 40) * hourly_rate * 0.5;
      // add (hours worked - 40) * 0.5 * hourly_rate to the salary
      // this calculates the overtime pay, which is 1.5 times the hourly rate for hours worked over 40
    } 

    printf("Salary is $%.2f\n\n", salary); // print the calculated salary to 2 decimal places
  }
}
