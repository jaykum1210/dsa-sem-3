#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createnode(data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void start(struct node** head,int val){
    struct node* newnode = createnode(val);
    newnode->next = *head;
    *head = newnode;
}

void end(struct node** head, int val){
    struct node* newnode = createnode(val);
    if (*head==NULL)
    {
        *head = newnode;
        return;
    }
    struct node* temp = *head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void after(struct node** head, int val, int data){
    struct node* temp = *head;
    while (temp!=NULL && temp->data!=data)
    {
        temp = temp->next;
    }
     
}

int main(){
    struct node* head = NULL;
    int choice,val,data,pos;
    while (choice!=6)
    {
        printf("\n1. Start\n");
        printf("2. End\n");
        printf("3. After\n");
        printf("4. Position\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Choice = ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter value = ");
            scanf("%d",&val);
            start(&head,val);
            break;
        case 2:
            printf("Enter value = ");
            scanf("%d",&val);
            end(&head,val);
            break;
        case 3:
            printf("Enter value = ");
            scanf("%d",&val);
            printf("Enter data = ");
            scanf("%d",&data);
            after(&head,val,data);
            break;
        case 4:
            printf("Enter value = ");
            scanf("%d",&val);
            printf("Enter position = ");
            scanf("%d",&pos);
            position(&head,val,data);
            break;
        case 5:
            display(head);
            break;
        case 6:
            printf("Exiting....\n");
            break;
        default:
            break;
        }
    }
    return 0;
}