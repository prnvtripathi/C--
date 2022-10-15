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
    p->data = val;
    if (head == NULL)
        p->next = NULL;
    else
        p->next = head;
    head = p;
}

void pop()
{
    if (head == NULL)
        cout << "Underflow !!";
    else
    {
        struct node *temp = head;
        cout << "Deleted data: " << temp->data << endl;
        head = temp->next;
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