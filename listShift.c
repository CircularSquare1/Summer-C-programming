// Task is to implement a function that shifts a linked list to the right n times and returns a 
// pointer to the start of the updated list. The nopde at the end of the list is moved to the start.

#include <stdlib.h>
#include <stdio.h> 
struct node {
        int value;
        struct node *next;
    };
// So what we are doing is creating a definition of 'Node' (line 9) and basically saying 
// it is of type struct node which as a value and a pointer called 'next' that is of type:
// struct node (self referential structure)
int main() {
    struct node *head = malloc(sizeof(struct node));
    head->value = 45;
    struct node *current = malloc(sizeof(struct node));
    head->next = current;
    current->value = 90;
    current->next = NULL;
    printf("%d, %d", head->value, current->value);
    free(current);
    free(head);
    
}