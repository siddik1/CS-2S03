//Author: Khizar Siddiqui 400109902
#include <stdio.h>

int power2(int a, int b);
int displayBits(int a);

int main()
{
  int number, pow;

  printf("Enter integer number:\n");
  scanf("%d", &number);
  printf("Enter integer power:\n");
  scanf("%d", &pow);

  power2(number, pow);
}

int power2(int a, int b)
{
  int result = a;

  for (b; b >= 1 ; --b)
  {
    result = result << 1;
  }

  printf("%d", result);
  displayBits(result);
}

int displayBits(int a)
{
  int displayMask = 1 << 31;

  for (unsigned int i = 0; i <= 32; ++i) {
    printf(a & displayMask ? '1' : '0');
    displayMask >> 1;

    if (i % 8 == 0)
    {
      printf(" ");
    }
  }
}
