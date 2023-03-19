#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *first = NULL;

void create(int a[], int n) // function to create linked list
{
    struct node *t, *last;
    first = new struct node; // first node created
    first->data = a[0];      // data of first node from array
    first->next = NULL;      // next is empty as there is no next node
    last = first;            // last pointer stores the location to the next node

    for (int i = 1; i < n; i++) // loop to create more nodes
    {
        t = new struct node; // next node is created
        t->data = a[i];      // data stored in the next node
        t->next = NULL;      // last node pointing to null
        last->next = t;      // address of new node stored to previous one's pointer
        last = t;            // the address of this is stored in last
    }
}

void display(struct node *p)
{
    while (p)
    {
        cout << p->data << " "; // displaying data
        p = p->next;            // moving on to next
    }
}

int middleElement(struct node *p)
{
    struct node *q = first;
    p = first;
    while (q)
    {
       q = q -> next;
       if(q)
        {
            q = q -> next;
            p = p -> next;
        }
    }

    return p->data;
}

int main()
{
    int a[]{2, 3, 10, 5, 6, 7, 2, 4, 6, 3, 8, 2, 9, 1, 15};

    create(a, 15);

    display(first);

    cout << "\nmiddle element: " << middleElement(first);

    return 0;
}