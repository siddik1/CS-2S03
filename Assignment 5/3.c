//Author: Khizar Siddiqui 400109902
#include <stdio.h>
#include <string.h>
#define SIZE 10000

int printLatinWord(char []);

int main()
{
  char string[SIZE];

  printf("Enter a string of 5 words with a space in the end: \n");
  fgets(string, SIZE, stdin);
  printLatinWord(string);

  return;
}

int printLatinWord(char string[])
{
    char final[SIZE];
    char new[SIZE];
    char start;
    char *word = strtok(string, " ");
    int i=0;
    while (word != NULL)
    {
        i++;
        if(i==6){
            break;
        }
      strcpy(new, word+1);
      strncat(new, word, 1);
      strcat(new, "ay");
      strcat(final, new);
      strcat(final, " ");
      word = strtok(NULL, " ");


    }

    printf("%s", final);
}
