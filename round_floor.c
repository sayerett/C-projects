#include <stdio.h>
#include <math.h>

// This function rounds the input number to the nearest integer
float roundToInteger(float number) {
  float rounded_number = floor(number + 0.5);
  return rounded_number;
}

// This function rounds the input number to the nearest tenth
float roundToTenths(float number) {
  float rounded_tenths = floor(number * 10 + 0.5) / 10;
  return rounded_tenths;
}

// This function rounds the input number to the nearest hundredth
float roundToHundredths(float number) {
  float rounded_hundredths = floor(number * 100 + 0.5) / 100;
  return rounded_hundredths;
}

// This function rounds the input number to the nearest thousandth
float roundToThousandths(float number) {
  float rounded_thousandths = floor(number * 1000 + 0.5) / 1000;
  return rounded_thousandths;
}

int main() {
  float number;

  // Get Input from Users
  printf("Input Number: ");
  scanf("%f", &number);

  // Call each rounding function with the user input as an argument
  float rounded_number = roundToInteger(number);
  float rounded_tenths = roundToTenths(number);
  float rounded_hundredths = roundToHundredths(number);
  float rounded_thousandths = roundToThousandths(number);

  // Print the original number and the rounded values
  printf("Number: %f\n Rounded to nearest integer: %.0f\n Rounded to nearest tenth: %.1f\n Rounded to nearest hundredths: %.2f\n Rounded to nearest thousandths: %.3f", number, rounded_number, rounded_tenths, rounded_hundredths, rounded_thousandths);
}
