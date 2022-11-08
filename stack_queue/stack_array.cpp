#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *s;
} st;

void push(stack *p, int val)
{
    if (p->top >= p->size - 1)
        cout << "Stack Overflow" << endl;
    else
    {
        p->top++;
        p->s[p->top] = val;
    }
}

void pop(stack *p)
{
    if (p->top <= -1)
        cout << "Stack Underflow" << endl;
    else
    {
        cout << "The popped element is " << p->s[p->top] << endl;
        p->top--;
    }
}

void display(stack p)
{
    if (p.top >= 0)
    {
        cout << "Stack elements are:";
        for (int i = p.top; i >= 0; i--)
            cout << p.s[i] << " ";
        cout << endl;
    }
    else
        cout << "Stack is empty";
}

bool isEmpty()
{
    if (st.top == -1)
        return true;
    return false;
}

bool isFull()
{
    if (st.top == st.size - 1)
        return true;
    return false;
}

int peek(stack p, int pos)
{
    int x = -1;
    if (p.top - pos + 1 < 0)
        cout << "\nInvalid Position";
    x = p.s[p.top - pos + 1];
    return x;
}

int main()
{
    cout << "Enter size of stack: ";
    cin >> st.size;
    st.s = new int[st.size];
    st.top = -1;

    int ch, val, pos;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Display stack" << endl;
    cout << "4) Peek Index" << endl;
    cout << "5) Exit" << endl;
    do
    {
        cout << "Enter choice: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter value to be pushed:" << endl;
            cin >> val;
            push(&st, val);
            break;
        case 2:
            pop(&st);
            break;
        case 3:
            display(st);
            break;
        case 4:
            cout << "What position you want to peek on?: " << endl;
            cin >> pos;
            cout << peek(st, pos);
            break;
        case 5:
            cout << "Exit" << endl;
            return 0;
        default:
            cout << "Invalid Choice" << endl;
        }
    } while (ch != 4);
    return 0;
}