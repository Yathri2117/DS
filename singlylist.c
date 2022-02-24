#include<stdio.h>
#include<conio.h>
int data;
struct list{
int data;
struct list *next;};
struct list *head=NULL;
void start(){
printf("Enter the value to insert into the list:");
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
}
}
void display1(){
struct list *temp=head;
printf("\nContents of the list is :\n");
while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void end(){
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
}
}
void display2(){
struct list *temp=head;
printf("\nContents of the list is :\n");
while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void specific(){
    int pos;
printf("Enter the value to insert into the list:");
scanf("%d",&data);
printf("Enter the location you want to insert:");
scanf("%d",&pos);
struct list *newnode,*temp;
newnode=(struct list*)malloc(sizeof(struct list));
newnode->data=data;
newnode->next=NULL;
if(head==NULL){
 head=newnode;
}
else{
        temp=head;
for(int i=1;i<pos-1;i++){
    temp=temp->next;
}
newnode->next=temp->next;
temp->next=newnode;
}
}
void display3(){
struct list *temp=head;
printf("\nContents of the list is :\n");
while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void main(){
int ch;
while(1){
printf("\nEnter the option\n 1.Insert a node at the beginning of the list.\n 2. Insert the node at the end of the list.\n 3. Insert the node at a specific location.\n 4. Exit\n");
scanf("%d",&ch);
switch(ch){
case 1: start();
display1();
break;
case 2 : end();
display2();
break;
case 3: specific();
display3();
break;
case 4: exit(0);
break;
default: printf("\nEnter valid Choice\n");
exit(0);
}
}
}
