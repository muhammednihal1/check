#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} 
main()
{
    int data, opt;
    struct node *start = (struct node *)0;
    struct node *insert(struct node *, int);
    struct node *delete (struct node *);
    void display(struct node *);
    do
    {
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice :");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("Enter the data to be inserted :");
            scanf("%d", &data);
            start = insert(start, data);
            break;
        case 2:
            delete (start);
            break;
        case 3:
            display(start);
            break;
        case 4:
            exit(0);
        }
    } while (1);
}
struct node *insert(struct node *s, int item)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t->data = item;
    t->next = s;
    return t;
}
struct node *delete(struct node *s)
{
    struct node *t = s;
    if (s != 0)
    {
        printf("%d deleted\n", t->data);
        free(t);
        s->next;
    }
    else
    printf("list is empty\n");
}
void display(struct node *s)
{
    while (s != 0)
    {
        printf("%d\t", s->data);
        s = s->next;
    }
    printf("\n");
}