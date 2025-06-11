#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    
    struct node {
        int data;
        struct node* link;
    } *start, *newnode, *temp;

    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &n);

    // Create the first node
    start = (struct node*)malloc(sizeof(struct node));
    if (start == NULL) {
        printf("Node not created\n");
        return 1;
    } else {
        printf("Enter data for node 1: ");
        scanf("%d", &start->data);
        start->link = NULL;  // First node's link is NULL as it's the end for now
        temp = start;  // Set temp to start to begin linking further nodes
    }

    // Create additional nodes
    for (i = 2; i <= n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Node not created\n");
            return 1;
        }

        printf("Enter data for node %d: ", i);
        scanf("%d", &newnode->data);
        newnode->link = NULL;

        temp->link = newnode;  // Link the previous node to the new node
        temp = newnode;  // Move temp to the new node
    }

    // Print the linked list
    printf("Linked list: ");
    temp = start;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");

    // Free the allocated memory
    temp = start;
    while (temp != NULL) {
        struct node* to_free = temp;
        temp = temp->link;
        free(to_free);
    }

    return 0;
}
