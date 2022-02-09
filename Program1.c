#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
int stack[SIZE],item,top=-1;
void push(int item, int stack[])
{
   if(top==SIZE-1){
       printf("Stack overflow\n");
       return;
   }
   else{
    top++;
    stack[top]=item;
    printf("Element inserted!\n");
   }
}
void display(int stack[])
{
    int j;
    if(top==-1){
        printf("Stack underflow\n");
        return;
    }
    printf("Contents of stack:\n");
    for(j=top;j>=0;j--)
    {
        printf("%d\t",stack[j]);
    }
}
void pop(int stack[])
{
    int poped;
    if(top==-1)
    {
        printf("Stack is underflow\n");
        return;
    }
    poped=stack[top];
    top--;
    printf("Poped value is : %d\n",poped);
}
void main()
{
    int ch;
    while(1)
    {
    printf("\nselect option\n 1. Push 2. Pop 3. Display 4. Exit \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("Enter item to be inserted:\t");
        scanf("%d",&item);
        push(item,stack);
        break;
        case 2: pop(stack);
        break;
        case 3: display(stack);
        break;
        case 4: exit(0);
        default: printf("Not Valid");
    }
    }
}
