#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head, *newNode;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 20;
    head->next = NULL;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = 10;
    newNode->next = head;
    head = newNode;
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}