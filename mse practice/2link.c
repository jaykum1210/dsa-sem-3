#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* createnode(int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data;
    newnode->next;
    return newnode;
};

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
    temp->next=newnode;
}

void position(struct node** head,int val,int pos){
    struct node* newnode = createnode(val);
    if (pos==1)
    {
        start(head,val);
        return;
    }
    struct 
}

int main(){
    struct node* head = NULL;
    int pos,val,data,option;
    while (1)
    {
        printf("\n");
        printf("1. Start\n");
        printf("2. End\n");
        printf("3. Position\n");
        printf("4. After\n");
        printf("5. diplay\n");
        printf("6. exit");
        printf("Enter choice = ");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            printf("Enter value = ");
            scanf("%d",&val);
            start(&head,val);
            break;
        case 2:
            printf("Enter value = ");
            scanf("%d",&val);
            end(&end,val);
            break;
        case 3:
            printf("Enter val and pos = ");
            scanf("%d%d",&val,&data);
            position(&head,val,data);
            break;
        case 4:
            printf("Enter val and data = ");
            scanf("%d%d",&val,&data);
            after(&head,val,data);
            break;
        case 5:
            display(head);
            break;
        case 6:
            printf("exit..");
            exit(0);
        }
    }
    return 0;
}