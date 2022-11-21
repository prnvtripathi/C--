#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *s;
} st;

void push(struct stack *p, int val)
{
    if (p->top >= p->size - 1)
        printf("Stack Overflow\n");
    else
    {
        p->top++;
        p->s[p->top] = val;
    }
}

void pop(struct stack *p)
{
    if (p->top <= -1)
        printf("Stack Underflow\n");
    else
    {
        printf("The popped element is: %d\n", p->s[p->top]);
        p->top--;
    }
}

void display(struct stack p)
{
    if (p.top >= 0)
    {
        printf("The stack elements are: ");
        for (int i = p.top; i >= 0; i--)
            printf("%d ", p.s[i]);
        printf("\n");
    }
    else
        printf("Stack is empty!\n");
}

int peek(struct stack p, int pos)
{
    int x = -1;
    if (p.top - pos + 1 < 0)
        printf("Invalid Position\n");
    x = p.s[p.top - pos + 1];
    return x;
}

int main()
{
    printf("Enter the size of stack: ");
    scanf("%d", &st.size);
    st.s = (int *)malloc(st.size * sizeof(int));
    st.top = -1;

    int ch, val, pos;
    printf("1) Push in Stack \n");
    printf("2) Pop from Stack \n");
    printf("3) Display Stack \n");
    printf("4) Peek Index \n");
    printf("5) Exit \n");

    do
    {
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter valueto be pushed: ");
            scanf("%d", &val);
            push(&st, val);
            break;
        case 2:
            pop(&st);
            break;
        case 3:
            display(st);
            break;
        case 4:
            printf("What position you want to peek on: ");
            scanf("%d", &pos);
            printf("%d\n", peek(st, pos));
            break;
        case 5:
            printf("Exit!");
            break;
        default:
            printf("Invalid Choice :/\n");
        }
    } while (ch != 5);
    return 0;
}