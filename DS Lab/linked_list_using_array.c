#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *first = NULL;

void create(int a[], int n)
{
    struct node *p, *last;
    first = (struct node *)malloc(sizeof(struct node *));
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node *));
        p->data = a[i];
        p->next = NULL;
        last->next = p;
        last = p;
    }
}

void display(struct node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void insertAtBeginning(int x)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = x;
    if (first)
    {
        p->next = first;
        first = p;
    }
    else
    {
        first = p;
        p->next = NULL;
    }
}

void insertAtEnd(int x)
{
    struct node *p = first;
    struct node *q = (struct node *)malloc(sizeof(struct node));
    q->data = x;
    if (first)
    {
        while (p->next)
            p = p->next;

        p->next = q;
        q->next = NULL;
    }
    else
    {
        q->next = NULL;
        first = q;
    }
}

int main()
{
    int a[10] = {1, 2, 3, 5, 6, 9, 12, 76, 34, 32};
    create(a, 10);
    display(first);
    printf("\n");
    insertAtBeginning(99);
    insertAtEnd(15);
    display(first);
    return 0;
}