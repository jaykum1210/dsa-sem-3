#include <stdio.h>
#define max 3
int arr[max],top=-1;

void push(int arr[],int val){
    top++;
    arr[top] = val;
}

void pop(int arr[]){
    printf("Deleted Value = %d\n",arr[top]);
    top--;
}

void peek(int arr[]){
    printf("Top element = %d\n",arr[top]);
}

void display(int arr[]){
    for (int i = 0; i <= top; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int val,pos,option=0;
    while (option!=5)
    {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter choice = ");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            if (top==max-1)
            {
                printf("Overflow\n");
                break;
            }
            printf("Enter value = ");
            scanf("%d",&val);
            push(arr,val);
            break;
        case 2:
            if (top==-1)
            {
                printf("Underflow\n");
                break;
            }
            pop(arr);
            break;
        case 3:
            if (top==-1)
            {
                printf("Underflow\n");
                break;
            }
            peek(arr);
            break;
        case 4:
            display(arr);
            break;
        case 5:
            printf("Exiting....\n");
            break;
        default:
            printf("Invalid option\n");
            break;
        }
    }
    return 0;
}