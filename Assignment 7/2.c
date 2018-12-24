//Author: Khizar Siddiqui 400109902
#include <stdio.h>
#include <dirent.h>

int main()
{
  struct dirent *ptrdir;

  DIR *ptropen = opendir(".");

  if (ptropen == NULL)
  {
    printf("cannot be opened current directory" );
    return 0;
  }

  while ((ptrdir = readdir(ptropen)) != NULL)
  {
    printf("%s\n", ptrdir->d_name);
  }

  closedir(ptropen);
}
