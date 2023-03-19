#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *head = NULL;

void push(int val)
{
    struct node *p = new struct node;
    if (p == NULL)
        cout << "Stack Overflow!";
    else
    {
        p->data = val;
        p->next = head;
        head = p;
    }
}

void pop()
{
    if (head == NULL)
        cout << "Underflow !!";
    else
    {
        struct node *temp = head;
        cout << "Deleted data: " << temp->data << endl;
        head = head->next;
        delete temp;
    }
}

void display()
{
    if (head == NULL)
        cout << "Stack underflow!" << endl;
    else
    {
        struct node *temp = head;
        cout << "Stack :" << endl;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}

bool isEmpty()
{
    return head ? false : true;
}

void peek(int pos)
{
    struct node *p = head;
    for (int i = 0; i < pos - 1 && p != NULL; i++)
        p = p->next;
    if (p != NULL)
        cout << "Value is " << p->data << endl;
    else
        cout << "Nothing found at this index" << endl;
}

int main()
{
    int ch, val, pos;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Peek in stack" << endl;
    cout << "4) Display stack" << endl;
    cout << "5) Exit" << endl;
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
            cout << "Enter index to peek on: ";
            cin >> pos;
            peek(pos);
            break;
        }
        case 4:
        {
            display();
            break;
        }
        case 5:
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