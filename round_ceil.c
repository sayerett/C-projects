#include <stdio.h>
#include <math.h>

int main() {
  float x;
  float y;

  // Loop until user inputs -1
  while(1) {
    // Get user input
    printf("Input Number (-1 to end): ");
    scanf("%f", &x);

    // If user inputs -1, exit the loop
    if (x == -1) {
      break;
    }

    // Round up the input value to the nearest integer
    y = ceil(x + .5);

    // Print the original value and the rounded value
    printf("Original Value: %f Rounded Value: %f\n", x , y);
  }
}
