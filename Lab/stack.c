#include <stdio.h>

int push(int b[],int val,int top){
    top++;
    b[top] = val;
    return top;
}

int pop(int b[], int top){
    int val = b[top];
    return val;
}

int peek(int b[],int top){
    int val = b[top];
    return val;
}

void display(int b[],int top){
    for (int i = 0; i <=top; i++)
    {
        printf("%d ",b[i]);
    }
}

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a],val,pos,option=0,top=-1;
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
            if (top==a-1)
            {
                printf("Overflow\n");
                break;
            }
            printf("Enter value = ");
            scanf("%d",&val);
            top = push(b,val,top);
            break;
        case 2:
            if (top==-1)
            {
                printf("Underflow\n");
                break;
            }
            val = pop(b,top);
            top--;
            printf("Deleted value = %d\n",val);
            break;
        case 3:
            if (top==-1)
            {
                printf("Underflow\n");
                break;
            }
            val = peek(b,top);
            printf("Top value = %d\n",val);
            break;
        case 4:
            display(b,top);
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid option\n");
            break;
        }
    }
    return 0;
}