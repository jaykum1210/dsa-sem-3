#include <stdio.h>

int push(int b[], int a, int val, int top){
    if (top==a-1)
    {
        printf("Overflow\n");
        return top;
    }
    top++;
    b[top] = val;
    return top;
}

int pop(int b[], int a, int top){
    if (top==-1)
    {   
        printf("Underflow\n");
        return -1;
    }
    printf("Deleetd element = %d\n",b[top]);
    return --top;
}

int peek(int b[], int a, int top){
    if (top==-1)
    {
        printf("Underflow\n");
        return -1;
    }
    return b[top];
}

void display(int b[], int top){
    if (top==-1)
    {
        printf("Empty\n");
        return;
    }
    for (int i = 0; i <=top; i++)
    {
        printf("%d ",b[i]);
    }
}

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    int val,option,top=-1;
    do
    {
        printf("1.Push\n");
        printf("2.Pop\n");
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
            top = push(b,a,val,top);
            printf("%d is inserted at index %d\n",val,top);
            break;
        case 2:
            top = pop(b,a,top);
            break;
        case 3:
            val = peek(b,a,top);
            if (val!=-1)
            {    
                printf("Topmost element = %d\n",val);
                break;
            }
        case 4:
            display(b,top);
            break;
        case 5:
            printf("Exiting\n");
            break;
        default:
            printf("Invalid option\n");
            break;
        }
    } while (option!=5);
    return 0;
}