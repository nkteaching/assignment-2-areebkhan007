
#include<iostream>
#include<stdlib.h> 
using namespace std;
struct Node 
{ 
    int data; 
    struct Node* next; 
}; 
  

void push(struct Node** head_ref, int data1) 
{ 

    struct Node* node1 = (struct Node*) malloc(sizeof(struct Node)); 
  

    node1->data  = data1; 
  

    node1->next = (*head_ref); 
  
    
    (*head_ref)    = node1; 
} 
  

int Count(struct Node* head) 
{ 
    
    if (head == NULL) 
        return 0; 
  
    
    return 1 + Count(head->next); 
} 
  

int main() 
{ 

    struct Node* head = NULL; 
  
    
    
    push(&head, 1); 
    push(&head, 3); 
    push(&head, 1); 
    push(&head, 2); 
    push(&head, 1); 
  
    
    cout<<"length of nodes"<< Count(head); 
    return 0; 
} 
