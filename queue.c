#include<stdio.h>

int queue[5];
int size = 5;
int front = -1 ;
int rear = -1 ; 

void display()
{
    int i ; 
    printf("************Queue**********\n");
    for(i=front;i<=4;i++)
    {
        printf("%d\n",queue[i]);
    }
    
}


void enqueue(int element)
{
    if(rear==size-1)
    {
        printf("Queue overflow\n");
    }
    else if(rear==-1 && front==-1)
    {
        front=rear=0;
        queue[rear]=element;
    }
    else
    {
        rear++;
        queue[rear]=element;
        
    }
    display();
}

void dqueue()

{
    if(front==-1)
    {
        printf("Queue underflow");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("The deleted element = %d\n ", queue[front]);
        front++;
        display();
    }
}


int main()

{
    int choice = 0 ;
    int value ;
    int dequed_value=0;
    
    printf("Enter 1 to Enqueue\n");
    printf("Enter 2 to Dqueue\n");
    printf("Enter 3 to break\n");
    
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d",&choice);
        
        if(choice==1)
        {
            printf("Enter the value:");
            scanf("%d",&value);
            enqueue(value);
        }
        
        if(choice==2)
        {
            dqueue();
            
            
        }
        if(choice==3)
        {
            break ; 
        }
    }
}
