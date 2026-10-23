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
    int pos, i;
    head = malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;
    newNode = malloc(sizeof(struct Node));
    newNode->data = 30;
    newNode->next = NULL;
    printf("Enter position: ");
    scanf("%d", &pos);
    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        temp = head;
        for (i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if (temp != NULL)
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}