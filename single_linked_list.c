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

void append(struct Node** head, int data) {
    // Create a new node with the provided data.
    struct Node* newNode = createNode(data);
    
    // If the list is empty, make the new node the head.
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    // Otherwise, traverse the list to find the last node.
    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;  // Move to the next node.
    }
    // Link the last node's next pointer to the new node.
    current->next = newNode;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head; // New node points to the current head
    *head = newNode; // Update head to new node
}

void deleteFromBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next; // Move head to next node
    free(temp); // Free memory of the old head
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
