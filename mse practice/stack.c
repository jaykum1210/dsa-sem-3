#include <stdio.h>

int push(int arr[],int val,int top){
    top++;
    arr[top] = val;
    return top;
}

void display(int arr[],int top){
    for (int i = 0; i <=top; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int a;
    printf("Enter size = ");
    scanf("%d", &a);
    int arr[a];
    int top = -1, val, option;
    do
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter option = ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            if (top == a - 1)
            {
                printf("Overflow\n");
                break;
            }
            else
            {
                printf("Enter value = ");
                scanf("%d", &val);
                top = push(arr, val,top);
                break;
            }
        case 2:
            if (top == -1)
            {
                printf("Underflow\n");
                break;
            }
            else
            {
                printf("Deleted element = %d\n", arr[top]);
                top--;
                break;
            }
        case 3:
            if (top == -1)
            {
                printf("Stack is empty\n");
                break;
            }
            else
            {
                printf("Top most element = %d\n", arr[top]);
                break;
            }
        case 4:
            if (top == -1)
            {
                printf("Stack is empty\n");
                break;
            }
            else
            {
                display(arr, top);
                break;
            }
        }
    } while (option != 5);
    return 0;
}