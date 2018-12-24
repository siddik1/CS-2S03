#include<stdio.h>
#include<stdlib.h>

struct node{
    char data;
    struct node *link;
};

void display(struct node *list)
{
    struct node *temp = list;
    while(temp!=NULL)
    {
        printf("%c ",temp->data);
        temp=temp->link;
    }
    printf("*\n");
}

int main(){

  int i;
  char a[] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' , 'J' };

  struct node *list1 = (struct node *)malloc(sizeof(struct node));
  struct node *list2 = (struct node *)malloc(sizeof(struct node));

  list1->data = a[0];
  list1->link = NULL;

  for(i = 1; i < 10; i++){
    struct node *temp1 = (struct node *)malloc(sizeof(struct node));
    temp1->data = a[i];
    temp1->link = list1;
    list1 = temp1;
  }

  list2->data = a[9];
  list2->link = NULL;

  for(i = 8; i >= 0; i--){
    struct node *temp2 = (struct node *)malloc(sizeof(struct node));
    temp2->data = a[i];
    temp2->link = list2;
    list2 = temp2;
  }

  printf("The list is: \n");
  display(list2);
  printf("\nThe list in reverse is: \n");
  display(list1);

}
