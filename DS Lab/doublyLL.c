#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *head = NULL;

void insertAtEnd(int val)
{
    struct node *temp, *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
        printf("Overflow!");
    else
    {
        p->data = val;
        if (head == NULL)
        {
            p->next = p->prev = NULL;
            head = p;
        }
        else
        {
            temp = head;
            while (temp->next)
                temp = temp->next;
            temp->next = p;
            p->prev = temp;
            p->next = NULL;
        }
    }
}

void insertAtBeg(int val)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
        printf("Overflow!");
    else
    {
        p->data = val;
        if (head == NULL)
        {
            p->next = p->prev = NULL;
            head = p;
        }
        else
        {
            p->prev = NULL;
            p->next = head;
            head->prev = p;
            head = p;
        }
    }
}

void display()
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d", p->data);
        p = p->next;
        if (p)
            printf("<->");
    }
    printf("\n");
}

int length()
{
    int length = 0;
    struct node *temp = head;
    while (temp)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

void delete (int index)
{
    if (index < 0 || index > length())
        printf("Deletion not possible");

    struct node *p = head;

    if (index == 1)
    {
        head = head->next;
        if (head)
            head->prev = NULL;
        free(p);
    }

    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        p->prev->next = p->next;
        if (p->next)
            p->next->prev = p->prev;
        free(p);
    }
}

int main()
{
    insertAtBeg(10);
    insertAtEnd(20);
    insertAtBeg(30);
    display();
    delete (1);
    display();
    printf("length of linked-list: %d", length());
    return 0;
}