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

int main()
{
    int a[] = {1,2,3,4,5,6,7};

    create(a, 7);

    cout<<"\nLength of the linked list : "<<length(first)<<endl;

    display(first);

    return 0;
}