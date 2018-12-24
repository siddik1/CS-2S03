//Author: Khizar Siddiqui 400109902
#include <stdio.h>
#include <stdlib.h>

struct node {
  char data;
  struct node* left_subtree;
  struct node* right_subtree;
};

int find(char A[], int start, int end, char value);

struct node* MyNode(char data);

struct node* constructTree(char in[], char pre[], int startPos, int endPos){

  static int preIndex = 0;

  if (startPos > endPos)
    return NULL;

  struct node* tNode = MyNode(pre[preIndex++]);

  if (startPos == endPos)
    return tNode;

  int inIndex = find(in, startPos, endPos, tNode->data);

  tNode->left_subtree = constructTree(in, pre, startPos, inIndex - 1);
  tNode->right_subtree = constructTree(in, pre, inIndex + 1, endPos);

  return tNode;
}

int find(char A[], int start, int end, char value){

  int i;
  for (i = start; i <= end; i++) {
    if (A[i] == value)
    return i;
  }
}

struct node* MyNode(char data){
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left_subtree = NULL;
  node->right_subtree = NULL;
  return (node);
}

void displayInOrder(struct node* node){
  if (node == NULL)
    return;

  displayInOrder(node->left_subtree);
  printf("%c ", node->data);
  displayInOrder(node->right_subtree);
}

int main(){
  char inArray[] = { 'D', 'B', 'E', 'A', 'F', 'C' };
  char preArray[] = { 'A', 'B', 'D', 'E', 'C', 'F' };
  int length = sizeof(inArray) / sizeof(inArray[0]);
  struct node* root = constructTree(inArray, preArray, 0, length - 1);
  printf("Inorder traversal of the constructed tree is \n");
  displayInOrder(root);
}
