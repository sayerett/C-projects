#include <stdio.h>

int isEven (int num) {
  if (num % 2 == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main()
{
  int num;
  printf("Input Number: ");
  scanf("%d", &num);

  printf("%d", isEven(num));
}