#include <stdio.h>
#include <stdlib.h>
struct Node{// defines a new data type called as Node
    int data;
    struct Node* next;//a pointer to another Node structure. Linking all.
};

struct Node* createNode(int data){// declaring a function that takes data and returns a pointer to Node.
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));//Allocates memory to Node structure
    newNode->data=data;
    newNode->next=NULL;
    return newNode;//returns the pointer to the New Node
}
int main() {

    return 0;
}
