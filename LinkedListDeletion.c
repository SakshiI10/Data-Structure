#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * DeleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head -> next;
    free(ptr);
    return head;
}

struct Node * DeleteAtIndex(struct Node * head, int index)
{
    struct Node * p = head;
    struct Node * q = head -> next;
    for (int i=0; i< index-1; i++)
    {
        p = p -> next;
        q = q -> next;
    }
    p -> next = q -> next;
    free(q);
    return head;
}

struct Node * DeleteAtLast(struct Node * head)
{
   struct Node * p = head;
   struct Node * q = head -> next;
   while(q -> next != NULL) 
   {
       p = p -> next;
       q = q -> next;
   }
   p -> next = NULL;
   free(q);
   return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 8;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = NULL;

    LinkedListTraversal(head);
    // head = DeleteFirst(head);
    // head = DeleteAtIndex(head, 2);
    head = DeleteAtLast(head);
    printf("\nLinked list after Deletion:\n");
    LinkedListTraversal(head);
    return 0;
}