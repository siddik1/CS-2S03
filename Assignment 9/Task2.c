#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int top = -1, front = 0;
int stack[50];

void push(char);
void pop();

void main()
{
    int i, choice;
    char original[50], b;

    printf("Enter a line of text\n");
    scanf(" %[^\t\n]s", original);

    for (i = 0;original[i] != '\0';i++){
      b = original[i];
      push(b);
    }

    for (i = 0;i < (strlen(original) / 2);i++){
      if (stack[top] == stack[front]){
        pop();
        front++;
      }
      else{
        printf("\"%s\" is not a palindrome", original);
        break;
      }
    }

    if ((strlen(original) / 2)  ==  front){
      printf("\"%s\" is palindrome\n", original);
    }

}
void push(char a){
    top++;
    stack[top]  =  a;
}

void pop(){
    top--;
}
