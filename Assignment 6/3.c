//Author: Khizar Siddiqui 400109902
#include <stdio.h>

int packCharacters(char a, char b);
int displayBits(int a);
int unpackCharacters(int a);

int main()
{
  char a, b;
  printf("Please enter characters:\n");
  scanf("%c %c", &a, &b);

  packCharacters(a, b);
}

int packCharacters(char a, char b)
{
    int numa, numb, final;
    numa = a;
    numb = b;

    final = numa;
    final = final << 8;
    final = final | numb;

    printf("'%c' in bits as an unsigned integer is:\n%d = ", a, numa);
    displayBits(numa);
    printf("\n'%c' in bits as an unsigned integer is:\n%d = ", b, numb);
    displayBits(numb);
    printf("\n'%c' and '%c' packed in an unsigned integer is:\n%d = ", a, b, final);
    displayBits(final);

    unpackCharacters(final);
}

int unpackCharacters(int val)
{
  printf("\n\n--------------------------------\n\nUnpacking the following: \n%d = ", val);
  displayBits(val);

  char a, b;
  unsigned int mask1 = 65280;
  unsigned int mask2 = 255;

  a = (val & mask1) >> 8;
  b = (val & mask2);

  printf("\nFirst character is: \n'%c' = %d = ", a, a);
  displayBits(a);
  printf("\nSecond character is: \n'%c' = %d = ", b, b);
  displayBits(b);
}

int displayBits(int a)
{
  unsigned int displayMask = 1 << 15;

  for (unsigned int i = 1; i <= 16; ++i) {
    putchar(a & displayMask ? '1' : '0');
    displayMask >>= 1;

    if (i % 8 == 0)
    {
      putchar(' ');
    }
  }
}
