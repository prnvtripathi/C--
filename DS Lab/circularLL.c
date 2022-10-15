#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL;

void insertAtBeg(int val)
{
    struct node *p = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = val;
    if (head == NULL)
    {
        head = temp;
        temp->next = temp;
    }
    else
    {
        temp->next = head;
        while (p->next != head)
            p = p->next;
        p->next = temp;
        head = temp;
    }
}

void create(int a[], int n)
{
    struct node *t, *last;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = a[0];
    head->next = NULL;
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    last->next = head;
}

void display()
{
    struct node *p;
    p = head;
    do
    {
        printf("%d ", p->data);
        p = p->next;
    } while (p != head);
}

int main()
{
    int a[] = {1, 3, 5, 6, 7, 3, 6, 9};
    create(a, 8);
    display();

    printf("\n");
    insertAtBeg(10);
    display();

    return 0;
}