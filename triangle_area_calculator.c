#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function prototypes
bool isTriangle(double side1, double side2, double side3);
double calculateArea(double side1, double side2, double side3);

int main()
{
  double side1, side2, side3, area;

  // Get input from user
  printf("Enter the length of the first side: ");
  scanf("%lf", &side1);

  printf("Enter the length of the second side: ");
  scanf("%lf", &side2);

  printf("Enter the length of the third side: ");
  scanf("%lf", &side3);

  // Calculate area and check if sides form a triangle
  area = calculateArea(side1, side2, side3);
  if (isTriangle(side1, side2, side3))
  {
    printf("The area of the triangle is: %lf\n", area);
  }
  else 
  {
    printf("The given sides do not form a triangle.\n");
  }
}

// Function to check if sides form a triangle
bool isTriangle(double side1, double side2, double side3)
{
  if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
  {
    return true;
  } 
  else 
  {
    return false;
  }
}

// Function to calculate the area of a triangle
double calculateArea(double side1, double side2, double side3)
{
  if (isTriangle(side1, side2, side3))
  {
    double s, area;
    s = (side1 + side2 + side3)/2;
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    return area;
  }
  else 
  {
    // If sides don't form a triangle, return 0
    return 0;
  }
}
