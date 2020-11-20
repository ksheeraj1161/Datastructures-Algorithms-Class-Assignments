#include<stdio.h>
#include<stdlib.h>
#define max_size 4
int queue[max_size],front=-1,rear=-1;

void enqueue();
void dequeue();
void display();

 int main()
{
        int choice;
        do{
 
                printf("\nProgram to perform QUEUE OPERATIONS\n");
                printf("1.enqueue\n");
                printf("2.Dequeue\n");
                printf("3.Display\n");
                printf("4.Exit\n");
                printf("\nEnter your choice: ");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1: 
                                        enqueue();
                                        break;
                        case 2:
                                        dequeue();
                                        break;
                        case 3:
                                        display();
                                        break;
                        case 4:
                                        exit(0);
                                        break;
                        default:
                                        printf("\nInvalid choice:\n");
                                        break;
                }
        }while(choice!=4);
        return 0;
}
void enqueue() 
{
        int item;
        if(rear==(max_size-1))
        {
                printf("\nQueue Overflow");
        }
        else
        {
                printf("Enter the element to be inserted: ");
                scanf("%d",&item);
                rear=rear+1;
                queue[rear]=item;
 
                if(front==-1)
                        front=0;
        }
 
}
void dequeue()      
{
        int item;
        if(front==-1)
        {
                printf("\nQueue Underflow");
        }
        else
        {
                item=queue[front];
                printf("\nThe deleted element: %d ",item);
                if(front==rear)
                {
                        front=-1;
                        rear=-1;
                }
                else
                {
                        front=front+1;
                }
        }
}
void display()  
{
        int i;
        if(front==-1)
        {
                printf("\nQueue is Empty");
        }
        else
        {
                printf("\nThe queue elements are:\n" );
                for(i=front;i<=rear;i++)
                {
                        printf("%d\t",queue[i]);
                }
        }
 
}
