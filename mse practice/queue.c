#include <stdio.h>

void enqueue(int arr[],int *front,int *rear,int val,int size){
    if (*rear==size-1)
    {
        printf("Queue is full\n");
    }
    else{
        if (*front==-1 && *rear==-1)
        {
            *front=*rear = 0;
        }
        else{
            (*rear)++;
        }
        arr[*rear] = val;
    }
}

void dequeue(int arr[],int *front,int *rear, int a){
    if (*rear==-1 || *front>*rear)
    {
        printf("Queue is empty\n");
    }
    else{
        printf("Deleted element = %d\n",arr[*front]);
        (*front)++;
    }
}

void peek(int arr[],int *front, int *rear, int size){
    if (*rear==-1 || *front>*rear)
    {
        printf("Queue is empty\n");
    }
    else{
        printf("Top element = %d\n",arr[*front]);
    }
}

void display(int arr[], int *front, int *rear, int a){
    if (*rear==-1||*front>*rear)
    {
        printf("Queue is empty\n");
    }
    else{
        for (int i = *front; i <=*rear; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int queue[a];
    int front = -1,rear = -1;
    int option,val;
    do
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("\nEnter option = ");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            printf("Enter value = ");
            scanf("%d",&val);
            enqueue(queue,&front,&rear,val,a);
            break;
        case 2:
            dequeue(queue,&front,&rear,a);
            break;
        case 3:
            peek(queue,&front,&rear,a);
            break;
        case 4:
            display(queue,&front,&rear,a);
        default:
            break;
        }
    } while (option!=5);
    
}