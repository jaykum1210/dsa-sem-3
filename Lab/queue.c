#include <stdio.h>

void enqueue(int arr[],int *front, int *rear, int val, int a){
    if (*rear==a-1)
    {
        printf("Overflow\n");
        return;
    }
    if (*front==-1)
    {
        *front=*rear=0;
    }
    else{
        (*rear)++;
    }
    arr[*rear]=val;
}

void dequeue(int arr[],int *front, int *rear){
    if (*rear==-1 || *front>*rear)
    {
        printf("Underflow\n");
        return;
    }
    printf("Deleted Value = %d\n",arr[*front]);
    (*front)++;
    if (*front>*rear)
    {
        *front = *rear = -1;
    }
}

void peek(int arr[], int *front, int *rear){
    if (*rear==-1 || *front>*rear)
    {
        printf("Underflow\n");
        return;
    }
    printf("Top Element = %d\n",arr[*front]);
}

void display(int arr[], int *front, int *rear){
    if (*rear==-1 || *front>*rear)
    {
        printf("Underflow\n");
        return;
    }
    for (int i = *front; i <=*rear; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int arr[a],front=-1,rear=-1, val,option=0;
    while (option!=5)
    {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter choice = ");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            printf("Enter value = ");
            scanf("%d",&val);
            enqueue(arr,&front,&rear,val,a);
            break;
        case 2:
            dequeue(arr,&front,&rear);
            break;
        case 3:
            peek(arr,&front,&rear);
            break;
        case 4:
            display(arr,&front,&rear);
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}