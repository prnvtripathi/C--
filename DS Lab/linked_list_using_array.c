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
    while(p)
    {
       printf("%d ", p -> data);
       p = p -> next; 
    }
}

int main()
{
    int a[10] = {1, 2, 3, 5, 6, 9, 12, 76, 34, 32};
    create(a, 10);
    display(first);
    return 0;
}