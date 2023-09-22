#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct{
    int data;
    struct stack *next;
} stack ;



void create(stack  *top,int x){
    stack *new;
    top = malloc(sizeof(stack));
    top->data = x ;
    top->next = NULL ;
    top = new ;
    scanf("%d",&x);
        do{
            new = malloc(sizeof(stack));
            new->data = x ;
            new->next = top;
            top = new ;
            scanf("%d",&x);
        }while(x!=0);
}
void push(stack *top,int val){
    stack *new;
    if(top==NULL){
        printf("Stack is initially empty");
        top = malloc(sizeof(stack));
        top -> data = val;
        top -> next = NULL;
    }
    else{
        new = malloc(sizeof(stack));
        new->data = val;
        new->next = NULL;
        top = new ;
    }
}
void pop(stack *top){
    stack *temp;
    temp = top;
    top=top->next;
    printf("POpped value is : %d",temp);
    free(temp);

}
void peek(stack *top){
    printf("%d",top->data);
}
void display(stack *top){
    stack *temp;
    temp = top;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp = temp->next;
    }
}
int main()
{
    stack *top = NULL;
    create(top, 5);
}