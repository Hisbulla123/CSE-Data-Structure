#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head, *temp, *newNode;

    head = malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    newNode = malloc(sizeof(struct Node));
    newNode->data = 20;
    newNode->next = NULL;

    temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;

    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}