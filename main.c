#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node* next;
  struct Node* prev;
};

struct Node* head;

struct Node* Getnewnode(int x){
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
  
  newNode -> data = x;
  newNode -> next = NULL;
  newNode -> prev = NULL;
  
  return newNode;
}

void InsertatHead(int x){
  struct Node* newNode = Getnewnode(x);
  if (head == NULL){
    head = newNode;
    return;
  }
  
  head -> prev = newNode;
  newNode -> next = head;
  head = newNode;
}

void Print(){
  struct Node* temp = head;
  printf("Forward: ");
  while(temp != NULL){
    printf("%d ", temp-> data);
    temp = temp-> next;
   }
   printf("\n");
}

void ReversePrint(){
  struct Node* temp = head;
  if(temp == NULL){
    return;
  }
  
  while(temp-> next != NULL){
    temp = temp-> next;
  }
  printf("Reverse: ");
  while(temp != NULL){
    printf("%d ", temp->data);
    temp= temp->prev;
  }
  printf("\n");
}

int main(){
  //Use various functions in order to test 
}
  
  
