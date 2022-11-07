#include <iostream>
using namespace std;

struct node
{
    int data;          // to store data in the node
    struct node *next; // pointer to the next node
} *first = NULL;       // pointer to the first node

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

void rDisplay(struct node *p) // recursive function to display
{
    if (p)
    {
        cout << p->data << " ";
        rDisplay(p->next);
    }
}

int count(struct node *p)
{
    int c = 0;
    while (p)
    {
        c++;
        p = p->next;
    }
    return c;
}

int sum(struct node *p)
{
    int s = 0;
    while (p)
    {
        s = s + p->data;
        p = p->next;
    }
    return s;
}

int max(struct node *p)
{
    int max = first->data;
    while (p)
    {
        if (max < p->data)
            max = p->data;
        p = p->next;
    }
    return max;
}

int min(struct node *p)
{
    int min = first->data;
    while (p)
    {
        if (min > p->data)
            min = p->data;
        p = p->next;
    }
    return min;
}

node *lsearch(struct node *p, int target)
{
    while (p)
    {
        if (target == p->data)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

void insert(int index, int value)
{
    node *t, *p;
    if (index == 0)
    {
        t = new node;
        t->data = value;
        t->next = first;
        first = t;
    }

    else if (index > 0)
    {
        p = first;
        for (int i = 0; i < index - 1 && p; i++)
            p = p->next;
        if (p)
        {
            t = new node;
            t->data = value;
            t->next = p->next;
            p->next = t;
        }
    }
}

void sortInsert(int value)
{
    node *t, *p, *q;
    p = first;
    q = NULL;
    t = new node;
    t->data = value;

    if (value < first->data)
    {
        t->next = first;
        first = t;
    }
    else
    {
        while (p && p->data < value)
        {
            q = p;
            p = p->next;
        }
        t->next = q->next;
        q->next = t;
    }
}

void remove()
{
    node *p = first;
    first = first->next;
    delete p;
}

void remove(int index)
{
    node *p, *q;
    p = first;
    q = NULL;
    for (int i = 0; i < index - 1 && p; i++)
    {
        q = p;
        p = p->next;
    }
    if (p)
    {
        q->next = p->next;
        delete p;
    }
}

bool isSort()
{
    node *p = first;
    int x = -32768;
    while (p)
    {
        if (p->data < x)
        {
            return false;
        }
        x = p->data;
        p = p->next;
    }
    return true;
}

void removeDuplicates()
{
    node *p = first,
         *q = first->next;
    while (q)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

void reverse()
{
    node *p = first, *q = NULL, *r = NULL;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

bool checkLoop()
{
    node *p, *q;
    p = q = first;
    do
    {
        p = p->next;
        q = q->next;
        q = q != NULL ? q->next : NULL;
    } while (p && q);
    return p == q ? true : false;
}

int main()
{

    int a[8] = {1, 2, 3, 4, 5, 7, 8, 9};

    create(a, 8);
    display(first);
    reverse();
    cout << endl;
    display(first);

    return 0;
}