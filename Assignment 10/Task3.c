//Author: Khizar Siddiqui 400109902
#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *left;
  struct node *right;
};

struct node* newNode(int data)
{
  struct node *temp = node struct node;
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;

  return temp;
}

void printTree(struct node *root, int k1, int k2){
   if ( NULL == root )
      return;

   if ( k1 < root->data )
     printTree(root->left, k1, k2);

   if ( k1 <= root->data && k2 >= root->data )
     printf("%d ", root->data );

   if ( k2 > root->data )
     printTree(root->right, k1, k2);
}

int main(){

  int k1 = 10, k2 = 22;

  struct node *root = new struct node;
  root = newNode(20);
  root->left = newNode(8);
  root->right = newNode(22);
  root->left->left = newNode(4);
  root->left->right = newNode(12);

  printTree(root, k1, k2);
}
