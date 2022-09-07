#include <iostream>
using namespace std;

struct node
{
    int data;                           // to store data in the nodes
    struct node* prev;                  // previous node
    struct node* next;                  // next node
}*first = NULL;

void create(int a[], int n){
    struct node *t, *last;
    first = new struct node;    // create new node
    first -> data = a[0];                 //data
    first -> prev = NULL;
    first -> next = NULL;
    last = first;
    for(int i = 1; i < n; i++){
        t = new struct node; // create new nodes
        t -> data = a[i];
        t -> next = last -> next; // next node
        t -> prev  = last;
        last -> next = t;
        last = t;
    }
}

void display( struct node *p){
    while(p){
        cout << p -> data << " ";
        p = p -> next;
    }
    cout << endl;
}

int length( struct node *p){
    int length = 0;
    while(p){
        p = p -> next;
        length++;
    }
    return length;
}

void insert(int value){
    struct node *t;
    t = new struct node;
    t -> data = value;
    t -> next = first;
    t -> prev = NULL;
    first -> prev = t;
    first = t;
}

void insert(int value, int index){
    struct node *t, *p = first;
    t = new struct node;
    t -> data = value;
    for(int i = 0; i < index; i++){
        p = p -> next;
    }
    t -> next = p -> next;
    t -> prev = p;
    if(p -> next)
        p -> next -> prev = t;
    p -> next = t;
}

void removeFirst()
{
    struct node *p;
    p = first;
    first = first -> next;
    delete p;
}

void remove(int index)
{
    struct node *p = first;
    for(int i = 0; i < index; i++)
        p = p -> next;
    p -> prev -> next = p -> next;
    if(p -> next)
        p -> next -> prev = p -> prev;
    delete p;
}

int main()
{
    int a[] = {1,2,3,4,5,6,7};

    create(a, 7);

    cout<<"\nLength of the linked list : "<<length(first)<<endl;

    display(first);

    return 0;
}