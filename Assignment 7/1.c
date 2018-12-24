//Author: Khizar Siddiqui 400109902
#include <stdio.h>
#include <stdlib.h>

void main()
{
	char ch, file1[20], file2[20], file3[40];
	FILE *ptrfile1, *ptrfile2, *ptrfile3;

	printf(" Input the 1st file name : ");
	scanf("%s",file1);

	printf(" Input the 2nd file name : ");
	scanf("%s",file2);

	printf(" Input the new file name where to merge the above two files : ");
	scanf("%s",file3);

	ptrfile1=fopen(file1, "r");
	ptrfile2=fopen(file2, "r");

	if(ptrfile1==NULL || ptrfile2==NULL)
	{
		printf(" File does not exist or error in opening...!!\n");
		exit(EXIT_FAILURE);
	}

	ptrfile3=fopen(file3, "w");

	if(ptrfile3==NULL)
	{
		printf(" File does not exist or error in opening...!!\n");
		exit(EXIT_FAILURE);
	}

	while((ch=fgetc(ptrfile1))!=EOF)
	{
		fputc(ch, ptrfile3);
	}

	while((ch=fgetc(ptrfile2))!=EOF)
	{
		fputc(ch, ptrfile3);
	}

	printf(" The two files merged into %s file successfully..!!\n", file3);

  printf("\nThe content of the file %s are:\n", file3);

  fclose(ptrfile3);

  ptrfile3=fopen(file3, "r");

  while((ch = fgetc(ptrfile3))!=EOF)
  {
    printf("%c", ch);
  }

	fclose(ptrfile1);
	fclose(ptrfile2);
	fclose(ptrfile3);
}
