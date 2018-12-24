//Author: Khizar Siddiqui 400109902
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

char str[20];
char stack[20];
int top = -1;

void push(char c)
{
   stack[++top]=c;
}

char pop()
{
   return stack[top--];
}

int main()
{
   int n,i,j=0;
   char c[20];
   char a,b;

   printf("Please input the prefix expression:\n");
   gets(str);

   n = strlen(str);

   for(i=0;i<20;i++)
   stack[i]='\0';
   printf("The resultant postfix expression is:\t");

   for(i=0;i<n;i++)
   {
      if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
      {
         push(str[i]);
      }
      else
      { c[j++]=str[i];
        while((top!=-1)&&(stack[top]=='@'))
        {
            a=pop(); c[j++]=pop();
        }
        push('@');
      }
   }
   c[j]='\0';
   printf("%s",c);
}
