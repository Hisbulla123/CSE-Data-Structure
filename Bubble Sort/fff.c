#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next
};
int main()
{
    struct Node *head = NULL;
    struct Node *tail = NULL;
    struct Node *newNode;
    struct Node *ptr;
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, value, pos, i;
    for (i = 0; i < 5; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = arr[i];
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    printf("old Linked list:");
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
    printf("Enter position:");
    scanf("%d", &pos);
    printf("Enter new data :");
    scanf("%d", &value);
    if (pos < 1 || pos > n)
    {
        printf("Invalid position");
    }
    else
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = value;
        if (pos == 1)
        {
            newNode->next = head;
            head = newNode;
            if (tail == NULL)
            {
            }
        }
    }
