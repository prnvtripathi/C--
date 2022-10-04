#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *first = NULL;

void push(int val)
{
    struct node *p = new struct node;
    p->data = val;
    if (first == NULL)
        p->next = NULL;
    else
        p->next = first;
    first = p;
}

void pop()
{
    if (first == NULL)
        cout << "Underflow !!";
    else
    {
        struct node *temp = first;
        cout << "Deleted data: " << temp->data << endl;
        first = temp->next;
        delete temp;
    }
}

void display()
{
    if (first == NULL)
        cout << "Stack underflow!" << endl;
    else
    {
        struct node *temp = first;
        cout << "Stack :" << endl;
        while (temp->next != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}

int main()
{
    int ch, val;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Display stack" << endl;
    cout << "4) Exit" << endl;
    do
    {
        cout << "Enter choice: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter value to be pushed:" << endl;
            cin >> val;
            push(val);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            cout << "Exit" << endl;
            break;
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
    } while (ch != 4);
    return 0;
}