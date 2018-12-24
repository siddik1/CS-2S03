//Author: Khizar Siddiqui 400109902
#include<stdio.h>
#include <stdlib.h>

struct listNode
{
  int data;
  struct listNode *nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insertAtEnd( ListNodePtr *sPtr, int value );
int isEmpty( ListNodePtr sPtr );
void printList( ListNodePtr currentPtr );
ListNodePtr search( ListNodePtr currentPtr, int item );
void instructions( void );

int main(){

  ListNodePtr startPtr = NULL;
  int choice = 0;
  int item = 0;
  instructions();
  printf( "? " );
  scanf( "%d", &choice );
  while ( choice != 3 ) {
    switch ( choice ) {
      case 1:
        printf( "Enter an integer: " );
        scanf( "\n%d", &item );
        insertAtEnd( &startPtr, item );
        printList( startPtr );
        break;
      case 2:
        printf( "Enter a element to recursively search for: " );
        scanf( "\n%d", &item );
        if(search( startPtr, item )!=NULL)
        printf("%d is in the list\n", item);
        else
        printf("%d isn't in the list\n", item);
        break;
      case 3:
        break;
      default:
        printf( "Wrong choice.\n\n" );
        instructions();
        break;
  }
  printf( "? " );
  scanf( "%d", &choice );
}
printf( "End of run.\n" );
return 0;
}

void instructions( void )

{

printf( "Enter your choice:\n"
" 1 to insert an element into the list .\n"
" 2 to recursively search list for an element.\n"
" 3 to end.\n");

}

void insertAtEnd( ListNodePtr *sPtr, int value ){
  ListNodePtr newPtr = NULL;
  ListNodePtr previousPtr = NULL;
  ListNodePtr currentPtr = NULL;
  newPtr = (ListNode *)malloc( sizeof( ListNode ) );
  if ( newPtr != NULL ) {
    newPtr->data = value;
    newPtr->nextPtr = NULL;
    previousPtr = NULL;
    currentPtr = *sPtr;
    if ( currentPtr == NULL ) {
      *sPtr = newPtr;
      return;
    }
    while ( currentPtr->nextPtr != NULL ) {
      previousPtr = currentPtr;
      currentPtr = currentPtr->nextPtr;
    }
    currentPtr->nextPtr = newPtr;
  }
  else {
    printf( "%c not inserted. No memory available.\n", value );
  }
}
int isEmpty( ListNodePtr sPtr ){
  return sPtr == NULL;
}
void printList( ListNodePtr currentPtr ){
  if ( currentPtr == NULL ) {
  printf( "List is empty.\n\n" );
  }

  else {
    printf( "The list is:\n" );
    while ( currentPtr != NULL ) {
      printf( "%d --> ", currentPtr->data );
      currentPtr = currentPtr->nextPtr;
    }
    printf( "NULL\n\n" );
  }
}
ListNodePtr search( ListNodePtr currentPtr , int item){
  if ( currentPtr == NULL ) {
  return NULL;
  }
  else {
    if( currentPtr->data==item)
      return currentPtr;
    return search(currentPtr->nextPtr, item);
  }
}
