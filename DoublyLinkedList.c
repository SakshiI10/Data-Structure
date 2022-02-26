#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * prev;
    struct Node * next;
};

void LinkedListTraversal(struct Node * head)
{
    struct Node * ptr = head;
    do
    {
        printf("%d ", ptr -> data);
        ptr = ptr -> next;
    } while (ptr != head);
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;
    head->prev = NULL;

    second->data = 3;
    second->next = third;
    second->prev = head;

    third->data = 5;
    third->next = fourth;
    third->prev = second;

    fourth->data = 7;
    fourth->next = NULL;
    fourth->prev = third;

    LinkedListTraversal(head);
    return 0;
}