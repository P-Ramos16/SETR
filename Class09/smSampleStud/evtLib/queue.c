#include <stdio.h>
#include <stdlib.h>


static node_t *head = NULL;


void addToQueue(EventType val) {
    node_t *currentTail = NULL;

    node_t *newNode = malloc(sizeof(node_t));
    if (!newNode) return;

    newNode->val = val;
    newNode->next = NULL;
    
    if (!head) {
        head = newNode;
    }
    else {
        currentTail = head;
        while (currentTail->next != NULL) {
            currentTail = currentTail->next;
        }

        currentTail-> next = newNode;
    }

}

EventType popFromQueue() {
    EventType val;
    node_t *nextHead = NULL;
    
    if (head == NULL) return -1;

    val = head->val;

    if (head->next)
        nextHead = head->next;
    else
        nextHead = NULL;

    free(head);

    head = nextHead;

    return val;
}

void printQueue() {
    node_t *current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}