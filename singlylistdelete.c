#include<stdio.h>
#include<conio.h>
int data;
struct list{
int data;
struct list *next;};
struct list *head=NULL;
void insert(){
    printf("Enter the data you want to insert : \t ");
    scanf("%d",&data);
struct list *newnode,*temp;
newnode=(struct list*)malloc(sizeof(struct list));
newnode->next=NULL;
newnode->data=data;
if(head==NULL)
    head=newnode;
else{
    newnode->next=head;
    head=newnode;
}
}
void display(){
    printf("Contents of the list is :\n");
struct list *temp=head;
while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void start(){
struct list *temp;
if(head==NULL)
    printf("Empty list\n");
    else if(head->next==NULL){
        free(head);
        head=NULL;
    }
    else{
        temp=head;
        head=head->next;
        free(temp);
    }
}
void end(){
struct list *temp,*pre;
if(head==NULL)
    printf("Empty list\n");
    else if(head->next==NULL){
        free(head);
        head=NULL;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
           pre=temp;
           temp=temp->next;
        }
        pre->next=NULL;
        free(temp);
    }
}
void specific(){
struct list *temp,*pre;
int pos;
printf("Enter the position of the node you want to delete:\t");
scanf("%d",&pos);
if(head==NULL)
    printf("Empty list\n");
    else if(head->next==NULL){
        free(head);
        head=NULL;
    }
    else{
        temp=head;
        for(int i=0;i<=pos;i++)
            pre=temp;
        temp=temp->next;
    }
    pre->next=temp->next;
    free(temp);
}
void main(){
int ch;
while(1){
printf("\nEnter the option\n 1. Insert the node \n 2.Delete a node at the beginning of the list.\n 3. Delete the node at the end of the list.\n 4. Delete the node at a specific location.\n 5. Exit\n");
scanf("%d",&ch);
switch(ch){
case 1: insert();
display();
break;
case 2: start();
display();
break;
case 3 : end();
display();
break;
case 4: specific();
display();
break;
case 5: exit(0);
break;
default: printf("\nEnter valid Choice\n");
exit(0);
}
}
}

