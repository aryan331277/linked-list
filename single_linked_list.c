#include <stdio.h>
#include <stdlib.h>

struct Node{// defines a new data type called as Node
    int data;
    struct Node* next;//a pointer to another Node structure. Linking all.
};

struct Node* createNode(int data){// declaring a function that takes data and returns a pointer to Node.
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));//Allocates memory to Node structure
    newNode->data=data;// Store the passed data in the node.
    newNode->next=NULL;// Initialize the next pointer to NULL (no next node yet).
    return newNode;//returns the pointer to the New Node
}

void printList(struct Node* head){
    struct Node* current=head;
    while(current!=NULL){
        printf("%d->",current->data);
        current=current->next;
    }
}

int main() {
    struct Node* node=NULL;
    printList(head);
    return 0;
}
