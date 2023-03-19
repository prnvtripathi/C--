#include <stdio.h>
#include <stdlib.h>

#define max 6
int queue[max];
int front = -1;
int rear = -1;

void enqueue(int element)
{
    if (front == rear == -1)
    {
        front = rear = 0;
        queue[rear] = element;
    }

    else if ((rear + 1) % max == front)
        printf("Queue is overflow!");

    else
    {
        rear = (rear + 1) % max;
        queue[rear] = element;
    }
}

void dequeue()
{
    if (front == rear == -1)
        printf("Queue is underflow!");
    else if (front == rear)
    {
        printf("The dequeued element is: %d", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("The dequeued element is: %d", queue[front]);
        front = (front + 1) % max;
    }
}

void display()
{
    int i = front;
    if (front == rear == -1)
        printf("The queue is empty!");

    else
    {
        printf("\nThe elements in queue are: \n");
        while (i <= rear)
        {
            printf("%3d", queue[i]);
            i = (i + 1) % max;
        }
    }
}

int main()
{
    int choice = 1, x; // variables declaration

    while (choice < 4 && choice != 0) // while loop
    {
        printf("\nPress 1: Insert an element");
        printf("\nPress 2: Delete an element");
        printf("\nPress 3: Display the element");
        printf("\nPress 4: Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter the element which is to be inserted: ");
            scanf("%d", &x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}