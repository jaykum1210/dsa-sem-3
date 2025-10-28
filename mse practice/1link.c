#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* createnode(int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data;
    newnode->next;
    return newnode;
}

void start(struct node** head,int data){
    struct node* newnode = createnode(data);
    newnode->next = *head;
    *head = newnode;
}

void end(struct node** head, int data){
    struct node* newnode=createnode(data);
    if (*head==NULL)
    {
        start(head,data);
        return;
    }
    struct node* temp = *head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void position(struct node** head,int pos,int val){
    struct node* newnode = createnode(val);
    if (pos==1)
    {
        newnode->next=*head;
        head=newnode;
        return;
    }
    struct node* temp = *head;
    for(int i = 1; i<pos-1 && temp!=NULL;i++){
        temp = temp->next;
    }
    if (temp==NULL)
    {
        printf("Out of range\n");
        return;
    }
    newnode->next=temp->next;
    temp->next = newnode;
}

void after(struct node** head, int data,int val){
    struct node* temp = *head;
    while (temp!=NULL && temp->data!=val)
    {
        temp = temp->next;
    }
    if (temp==NULL)
    {
        printf("%d not found\n",val);
        return;
    }
    struct node* newnode = createnode(data);
    newnode->next=temp->next;
    temp->next = newnode;
}

void display(struct node* head){
    struct node* temp = head;
    while (temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp= temp->next;
    }
    
}

int main(){
    struct node* head = NULL;
    int choice,pos,val,data;
    while (1)
    {
        printf("\n");
        printf("1. Start\n");
        printf("2.end\n");
        printf("3.Position\n");
        printf("4.After\n");
        printf("5.Display\n");
        printf("6.Exit\n");
        printf("Enter choice = ");
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
            printf("Enter position and value = ");
            scanf("%d%d",&pos,val);
            position(&head,pos,val);
            break;
        case 4:
            printf("Enter value and data = ");
            scanf("%d%d",&val,&data);
            after(&head,data,val);
            break;
        case 5:
            display(&head);
            break;
        case 6:
            printf("Exiting...");
            exit(0);
        default:
            printf("invalid choice\n");
            break;
        }
    }
    return 0;
}