#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* createnode(int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data;
    newnode -> next;
    return newnode;
}

void start(struct node** head, int data){
    struct node* newnode = createnode(data);
    newnode->next = *head;
    *head = newnode;
}

void end(struct node** head, int data){
    struct node* newnode = createnode(data);
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

void position(struct node** head, int data,int pos){
    if (position==-1)
    {
        start(head,data);
        return;
    }
    struct node* newnode = createnode(data);
    struct node* temp = *head;
    for (int i = 0; i < position-1 && temp!=NULL; i++)
    {
        temp = temp->next;
    }
    if (temp==NULL)
    {
        printf("Position out of range\n");
        return;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void after(struct node** head,int val,int data){
    struct node* temp = *head;
    while (temp!=NULL && temp->data!=val)
    {
        temp = temp->next;
    }
    if (temp==NULL)
    {
        printf("Value %d not found\n",val);
        return;
    }
    struct node* newnode = createnode(data);
    newnode->next = temp->next;
    temp->next= newnode;
}

void display(struct node* head){
    struct node* temp = head;
    printf("Link list: ");
    while (temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    struct node* head = NULL;
    int choice, data,pos,val;
    while (1)
    {
        printf("\n1. Insert at start\n");
        printf("2. insert at end\n");
        printf("3. insert at position\n");
        printf("4. insert after a given node\n");
        printf("5. display\n");
        printf("6. Exit\n");
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
            printf("Enter value = ");
            scanf("%d",&val);
            position(&head,val,pos);
            break;
        case 4:
            printf("Enter value after which to insert and new data: ");
            scanf("%d%d", &val, &data);
            after(head, val, data);
            break;
        case 5:
            display(head);
            break;
        case 6:
            printf("Exiting...\n");
            exit(0);
        }
    }
    return 0;
}