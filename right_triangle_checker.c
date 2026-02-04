#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to find the largest side of a triangle
int checkLargestSide(int side1, int side2, int side3);

// Function to calculate the square of a number
int square(int num);

// Function to check if a triangle is a right-angle triangle
int isRightAngleTriangle(int side1, int side2, int side3);

int main()
{
  int side1, side2, side3;

  // Get the sides of the triangle from the user
  printf("Input side 1: ");
  scanf("%d", &side1);

  printf("Input side 2: ");
  scanf("%d", &side2);

  printf("Input side 3: ");
  scanf("%d", &side3);

  // Call the isRightAngleTriangle function to check if the triangle is a right-angle triangle
  printf("%d", isRightAngleTriangle(side1, side2, side3));
}

// Function to check if a triangle is a right-angle triangle
int isRightAngleTriangle(int side1, int side2, int side3)
{
  int hypotenuse, opposite, adjacent;

  // Find the largest side of the triangle
  hypotenuse = checkLargestSide(side1, side2, side3);

  // Determine which sides are the opposite and adjacent sides based on the largest side (hypotenuse)
  if (side1 != hypotenuse)
  {
    opposite = side1;
    adjacent = (side2 > side3) ? side3 : side2;
  }
  else if (side2 != hypotenuse)
  {
    opposite = side2;
    adjacent = (side1 > side3) ? side3 : side1;
  }
  else
  {
    opposite = side3;
    adjacent = (side1 > side2) ? side2 : side1;
  }

  // Check if the triangle satisfies the Pythagorean theorem (hypotenuse^2 = opposite^2 + adjacent^2)
  if (square(hypotenuse) == square(opposite) + square(adjacent))
  {
    return 1; // If the triangle is a right-angle triangle, return 1
  }
  else
  {
    return 0; // If the triangle is not a right-angle triangle, return 0
  }
}

// Function to find the largest side of a triangle
int checkLargestSide(int side1, int side2, int side3)
{
  int largest_side;
  largest_side = side1;
  if (side2 > largest_side)
  {
    largest_side = side2;
  }
  if (side3 > largest_side)
  {
    largest_side = side3;
  }
  return largest_side;
}

// Function to calculate the square of a number
int square(int num)
{
  return num * num;
}
