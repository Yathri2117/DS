#include<stdio.h>
#include<conio.h>
int data1,data2;
struct list1{
int data1;
struct list1 *next1;};
struct list1 *head1=NULL;

struct list2{
int data2;
struct list2 *next2;};
struct list2 *head2=NULL;

void insert(){
printf("Enter the value to insert into the 1st list:");
scanf("%d",&data1);
struct list1 *newnode1=(struct list1*)malloc(sizeof(struct list1));
newnode1->data1=data1;
newnode1->next1=NULL;
if(head1==NULL)
    head1=newnode1;
else{
    newnode1->next1=head1;
    head1=newnode1;
}
printf("Enter the value to insert into the 2nd list:");
scanf("%d",&data2);
struct list2 *newnode2=(struct list2*)malloc(sizeof(struct list2));
newnode2->data2=data2;
newnode2->next2=NULL;
if(head2==NULL)
    head2=newnode2;
else{
    newnode2->next2=head2;
    head2=newnode2;
}
}

void display(){
    struct list1 *temp1=head1;
    struct list2 *temp2=head2;
printf("\nContents of 1st list:\n");
while(temp1!=NULL)
    {
        printf("%d\t",temp1->data1);
        temp1=temp1->next1;
    }
printf("\nContents of 2nd list :\n");
while(temp2!=NULL)
{
    printf("%d\t",temp2->data2);
    temp2=temp2->next2;
}
}
void sort(){
    struct list1 *temp1,*pre1;
    struct list2 *temp2,*pre2;
    int store1,store2;
    temp1=head1;
    if(temp1==NULL)return;
    else
    while(temp1!=NULL){
        pre1=temp1->next1;
    while(pre1!=NULL){
        if(temp1->data1 > pre1->data1){
        store1=temp1->data1;
        temp1->data1=pre1->data1;
        pre1->data1=store1;
    }
    pre1=pre1->next1;
    }
    temp1=temp1->next1;
    }
    temp2=head2;
    if(temp2==NULL)return;
    else
    while(temp2!=NULL){
        pre2=temp2->next2;
    while(pre2!=NULL){
        if(temp2->data2 > pre2->data2){
        store2=temp2->data2;
        temp2->data2=pre2->data2;
        pre2->data2=store2;
    }
    pre2=pre2->next2;
    }
    temp2=temp2->next2;
    }
    sdisplay();
}
void reverse(){
struct list1 *cu1,*pre1,*temp1;
struct list2 *cu2,*pre2,*temp2;
pre1=NULL;
cu1=head1;
temp1=NULL;
cu2=head2;
pre2=NULL;
temp2=NULL;
while(cu1!=NULL)
    {
        temp1=cu1->next1;
        cu1->next1=pre1;
        pre1=cu1;
        cu1=temp1;
    }
    head1=pre1;
while (cu2!=NULL)
{
    temp2=cu2->next2;
    cu2->next2=pre2;
    pre2=cu2;
    cu2=temp2;
}
head2=pre2;
}
void concate(){
struct list1 *temp1=head1;
if(head1==NULL&&head2==NULL)
    printf("Both list are empty\n");
else if(head1==NULL){
    head1=head2;
    while(head1!=NULL){
    printf("%d\t",head1->data1);
    head1=head1->next1;}
    }
else if(head2==NULL){
    while(head1!=NULL){
    printf("%d\t",head1->data1);
    head1=head1->next1;}}
else
{
    while(temp1->next1!=NULL)
    {
    temp1=temp1->next1;
    }temp1->next1=head2;
     while(head1!=NULL){
    printf("%d\t",head1->data1);
    head1=head1->next1;}
}
}
void main(){
int op;
struct list1 *store;
while(1){
printf("\nEnter the option:\n 1. Create a list \n 2 Sort the list\n 3. Reverse the list\n 4. Concatenate the list\n 5. Exit\n");
scanf("%d",&op);
switch(op){
case 1: insert();
display();
break;
case 2:sort();
display();
break;
case 3: reverse();
display();
break;
case 4: concate();
break;
case 5: exit(0);
default:exit(0);}
}
}
