#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int sp=-1;
void main()
{
   void push(int);
    int pop();
    void display();
    int opt,data;
    do{
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter your choice :");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            printf("Enter the data :");
            scanf("%d",&data);
            push(data);
            break;
            case 2:
            data=pop();
            printf("The popped item =%d",data);
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
        }
    }while(1);
}
void push(int data)
{
    if(sp==size-1)
    printf("Stack is full");
else
stack[++sp]=data;
}
int pop(){
if(sp==-1)
printf("Stack is empty");
else
return stack[sp--];
}
void display()
{
    int tsp=sp;
    while(tsp!=-1)
    printf("%d\t",stack[tsp--]);
}