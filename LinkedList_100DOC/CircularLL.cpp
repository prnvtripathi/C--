#include <iostream>
using namespace std;

struct node
{
    int data;          // to store data in the node
    struct node *next; // pointer to the next node
} *head = NULL;

void display(node *p)
{
    do
    {
        cout << p->data;
        p = p->next;

    } while (p != head);
}

void insert(int x, int pos)
{
    node *t;
    node *p = head;
    for (int i = 0; i < pos - 1; i++)
        p = p->next;
    t = new node;
    t->data = x;
    t->next = p->next;
    p->next = t;
}

void insertBeforeHead(int x)
{
    node *p = head;
    node *t = new node;
    t->data = x;
    t->next = head;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = t;
    head = t; // optional line it's not necessary to make head point on new node formed
}

void remove(int pos)
{
    node *p;
    p = head;
    for (int i = 0; i < pos - 2; i++)
    {
        p = p->next;
    }
    node *q = p->next;
    p->next = q->next;
    delete q;
}

void remove_head()
{
    node *p = head;
    head = head->next;
    delete p;
}

int main()
{

    return 0;
}