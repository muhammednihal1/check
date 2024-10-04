#include <stdio.h>
#include <stdlib.h>
#define size 10
int queue[size];
int front = 0, rear = 0;
int main()
{
    int data, opt;
    int insertq(int);
    void deleteq();
    void search(int);
    do
    {
        printf("\n1.Insert\n2.Delete\n3.Search\n4.Exit");
        printf("Enter your option :");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("Enter the data :");
            scanf("%d", &data);
            insertq(data);
            break;
        case 2:
            deleteq();
            break;
        case 3:
            printf("Enter the element to be searched :");
            scanf("%d", &data);
            search(data);
            break;
        case 4:
            exit(0);
        }
    } while (1);
}
int insertq(int data)
{
    if (rear == size - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        queue[rear++] = data;
    }
}
void deleteq()
{
    if (front == rear)
    {
        printf("Queue is empty\n");
    }
    else
    {

        printf("%d deleted from the queue", queue[front++]);
    }
}
void search(int data)
{
    int i;
    for (i = front; i < rear; i++)
    {
        if (queue[i] == data)
        {
            printf("%d found in the queue\n", data, i - front + 1);
            break;
        }
        else
            printf("%d not found in the queue\n", data);
    }
}
