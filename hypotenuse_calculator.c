#include <stdio.h>
#include <math.h>

// Function prototypes
double square(double num);
double hypotenuse(double side1, double side2);

int main()
{
  double side1, side2, hyp;
  
  // Collect Input from users
  printf("Enter side 1: ");
  scanf("%lf", &side1);

  printf("Enter side 2: ");
  scanf("%lf", &side2);

  // Calculate the hypotenuse using the hypotenuse() function
  hyp = hypotenuse(side1, side2);

  // Output the result to the user
  printf("The hypotenuse is %lf\n", hyp);
}

// function to calculate the square of a number
double square(double num)
{
  return num * num;
}

double hypotenuse(double side1, double side2)
{
  // Use the Pythagorean theorem to calculate the hypotenuse and return it
  return sqrt(square(side1) + square(side2));
} 