#include<stdio.h>
#include<conio.h>
#define MAX 100



void create(int stack[],int num,int top){
    for(top=0;top<MAX;top++){
        scanf("%d",&stack[top]);
        --top;
    }
}

void push(int stack[],int num,int top)
{
    if(top==MAX-1)
        printf("Stack overflow");
    else
        stack[top++]=num;
}

int pop(int stack[],int num,int top)
{
    int val;
    if (top==-1)
    {
        printf("Stack is underflow");
        return -1;
    }
    else{
        val = stack[top];
        top--;
        return val;
    }
}

int peek(int stack[],int top)
{
    if (top == -1)
    {
        printf("Stack is underflow");
        return -1;
    }
    else
        return stack[top];
}

void display(int stack[],int top)
{
    int i;
    for(i=top;i>=0;i++)
        printf("%d",stack[i]);
}

void IsEmpty(int top){
    if(top==-1)
        printf("Empty");
    else
        printf("Not Empty");
}

void Isfull(int top)
{
    if (top == MAX-1)
        printf("Full");
    else
        printf("Not full");
}

void main()
{
    int stack[MAX];
    int top = -1;
    create(stack, 5, top);
    display(stack, top);
}