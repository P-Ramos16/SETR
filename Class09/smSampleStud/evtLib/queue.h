
#ifndef CMD_PROC_H_
#define CMD_PROC_H_

typedef struct node {
    EventType event;
    struct node *next;
} node_t;

void addToQueue(EventType val);
EventType popFromQueue();
void printQueue(node_t *head);

#endif
