#include <stdio.h>

void enqueue(int b[], int a, int *front, int *rear, int val){
    if ((*front == (*rear + 1) % a))   // Queue full condition
    {
        printf("Overflow\n");
        return;
    }

    if (*front == -1)   // First insertion
    {
        *front = 0;
        *rear = 0;
    }
    else
    {
        *rear = (*rear + 1) % a;   // Circular increment
    }

    b[*rear] = val;
    printf("%d inserted at index %d\n", val, *rear);
}

int dequeue(int b[], int a, int *front, int *rear){
    if (*front == -1)   // Empty queue
    {
        printf("Underflow\n");
        return -1;
    }

    int val = b[*front];

    if (*front == *rear)   // Only one element
    {
        *front = -1;
        *rear = -1;
    }
    else
    {
        *front = (*front + 1) % a;   // Circular increment
    }

    return val;
}

int peek(int b[], int a, int *front, int *rear){
    if (*front == -1)
    {
        printf("Queue is empty\n");
        return -1;
    }
    return b[*front];
}

void display(int b[], int a, int *front, int *rear){
    if (*front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");
    int i = *front;
    while (1)
    {
        printf("%d ", b[i]);
        if (i == *rear)
            break;
        i = (i + 1) % a;
    }
    printf("\n");
}

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d", &a);
    int b[a];

    int front = -1, rear = -1, val, option;

    do
    {
        printf("\n1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter option = ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Enter value = ");
            scanf("%d", &val);
            enqueue(b, a, &front, &rear, val);
            break;

        case 2:
            val = dequeue(b, a, &front, &rear);
            if (val != -1)
                printf("Deleted element = %d\n", val);
            break;

        case 3:
            val = peek(b, a, &front, &rear);
            if (val != -1)
                printf("Front element = %d\n", val);
            break;

        case 4:
            display(b, a, &front, &rear);
            break;

        case 5:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid option\n");
        }

    } while (option != 5);

    return 0;
}
