//Author: Khizar Siddiqui 400109902
#include <stdio.h>

int main ()
{
  FILE * ptrfile;
  int i,n;
  char str[200], file[20], strnew;

	printf(" Input the file name to be opened : ");
	scanf("%s",file);

  ptrfile = fopen(file, "a");
    printf(" Input the number of lines to be written : ");
    scanf("%d", &n);
    printf(" The lines are : \n");

    for(i = 0; i < n+1;i++)
    {
      fgets(str, sizeof str, stdin);
      fputs(str, ptrfile);
    }

  fclose (ptrfile);

	ptrfile = fopen (file, "r");

	printf("\n The content of the file %s is  :\n",file);

  strnew = fgetc(ptrfile);

	while (strnew != EOF)
		{
			printf ("%c", strnew);
			strnew = fgetc(ptrfile);
		}
  fclose (ptrfile);
}
