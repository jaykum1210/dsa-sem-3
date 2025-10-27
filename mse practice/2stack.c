#include <stdio.h>
#define max 3

int arr[max],top=-1;

void push(int arr[],int val){
    if (top==max-1)
    {
        printf("Overflow\n");
    }
    else{
        top++;
        arr[top] = val;
    }
}

void pop(int arr[]){
    if (top==-1)
    {
        printf("Underflow\n");
    }
    else{
        printf("Deleted Element = %d\n",arr[top]);
        top--;
    }
}

void peek(int arr[]){
    if (top==-1)
    {
        printf("Stack is Empty\n");
    }
    else{
        printf("Top element = %d\n",arr[top]);
    }
}

void display(int arr[]){
    if (top==-1)
    {
        printf("Stack is Empty\n");
    }
    else{
        for (int i = 0; i <=top; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}

int main(){
    int option,val;
    do
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("\nEnter choice = ");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            printf("Enter value = ");
            scanf("%d",&val);
            push(arr,val);
            break;
        case 2:
            pop(arr);
            break;
        case 3:
            peek(arr);
            break;
        case 4:
            display(arr);
            break;
        }
    } while (option!=5);
    return 0;
}