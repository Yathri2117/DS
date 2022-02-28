#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int data;
struct list{
int data;
struct list *next;};
struct list *head=NULL;

void stack(){
int ch;
while(1){
printf("\nEnter the option\n 1. Push \t 2. Pop \t 3. Display \t 4. Exit\n");
scanf("%d",&ch);
switch(ch){
case 1: push();
break;
case 2 : pop();
break;
case 3: display();
break;
case 4: exit(0);
break;
default: printf("\nEnter valid Choice\n");
exit(0);
}
}}

void queue(){
int ch;
while(1){
printf("\nEnter the option\n 1. Insert\t 2. Delete\t 3. Display \t 4. Exit\n");
scanf("%d",&ch);
switch(ch){
case 1: insert();
break;
case 2 : delete();
break;
case 3: display1();
break;
case 4: exit(0);
break;
default: printf("\nEnter valid Choice\n");
exit(0);
}
}}

void push(){
printf("Enter the value to push into the stack:");
scanf("%d",&data);
struct list *newnode;
newnode=(struct list*)malloc(sizeof(struct list));
newnode->data=data;
newnode->next=NULL;
if(head==NULL){
 head=newnode;
}
else{
    newnode->next=head;
    head=newnode;
}}

void pop(){
struct list *temp;
if(head==NULL)
    printf("Empty stack in the list!\n");
    else if(head->next==NULL){
        free(head);
        head=NULL;
    }
    else{
            printf("Element deleted\n");
        temp=head;
        head=head->next;
        free(temp);
    }
}

void display(){
struct list *temp=head;
printf("\nContents of the stack is :\n");
while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }}

void insert(){
printf("Enter the value to insert into the list:");
scanf("%d",&data);
struct list *newnode,*temp;
newnode=(struct list*)malloc(sizeof(struct list));
newnode->data=data;
newnode->next=NULL;
if(head==NULL){
 head=newnode;
}
else{
        temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=newnode;
}}

void delete(){
struct list *temp;
if(head==NULL)
    printf("Empty stack in the list!\n");
    else if(head->next==NULL){
        free(head);
        head=NULL;
    }
    else{
            printf("Element deleted\n");
        temp=head;
        head=head->next;
        free(temp);
    }}

void display1(){
struct list *temp=head;
printf("\nContents of the queue is :\n");
while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }}

void main(){
int ch;
while(1){
printf("\nEnter the option\n 1. Stack \n 2. Queue\n 3. Exit\n");
scanf("%d",&ch);
switch(ch){
case 1: stack();
break;
case 2: queue();
break;
case 3: exit(0);
break;
default : exit(0);
}
}
}

