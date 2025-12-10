#include <stdio.h>

void enqueue(int b[], int a,int *front,int *rear,int val){
    if (*rear==a-1)
    {
        printf("Overflow\n");
        return;
    }
    else{
        if (*front==-1)
        {
            *front = 0;
        }
        (*rear)++;
        b[*rear] = val;
        printf("%d inserted at index %d\n",val,*rear); 
    }
    return;
}

int dequeue(int b[], int *front, int *rear){
    if (*front==-1 || *front>*rear)
    {
        printf("Underflow\n");
        return -1;
    }
    return b[(*front)++];
}

int peek(int b[], int *front, int *rear){
    if (*front==-1 || *front>*rear)
    {
        printf("Queue is empty\n");
        return -1;
    }
    return b[*rear];
}

void display(int b[], int *front,int *rear){
    if (*front==-1 || *front>*rear)
    {
        printf("Queue is empty\n");
        return;
    }
    for (int i = *front; i <=*rear; i++)
    {
        printf("%d ",b[i]);
    }
    return;
}

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    int front=-1,rear=-1,val,option;
    do
    {
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter option = ");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            printf("Enter value = ");
            scanf("%d",&val);
            enqueue(b,a,&front,&rear,val);
            break;
        case 2:
            val = dequeue(b,&front,&rear);
            if (val!=-1)
            {
                printf("Deleted element = %d\n",val);
            }
            break;
        case 3:
            val = peek(b,&front,&rear);
            if (val!=-1)
            {
                printf("Topmost Element = %d\n",val);
            }
            break;
        case 4:
            display(b,&front,&rear);
            break;
        case 5:
            printf("Exiting.....\n");
        default:
            printf("Invalid choice");
            break;
        }
    } while (option!=5);
    
}