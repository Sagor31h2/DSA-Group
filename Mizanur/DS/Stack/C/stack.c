#include <stdio.h>
#include <stdbool.h>
#define STACK_SIZE 4

//type definition for Stack
typedef struct
{
    int top;
    int data[STACK_SIZE];
} Stack;


//function prototype
void push(Stack *s, int item);
int pop(Stack *s);
int peek(Stack *s);
bool isEmpty(Stack *s);
bool isFull(Stack *s);


//main program
int main(void){
  Stack stack;
  stack.top = 0;
    isEmpty(&stack) ? printf("Stack is empty\n") : printf("Stack is not Empty!\n");
    push(&stack, 5);
    push(&stack, 2);
    push(&stack, 6);
    push(&stack, 7);
    push(&stack, 7);
    printf("%d\n\n", peek(&stack));
    printf("%d\n\n", peek(&stack));
    printf("%d\n\n", pop(&stack));
    printf("%d\n\n", pop(&stack));
    isEmpty(&stack) ? printf("Stack is empty\n") : printf("Stack is not Empty!\n");
    isFull(&stack) ? printf("Stack is full\n") : printf("Stack is not full\n");
    return 0;
}


//METHOD: Push()
void push(Stack *s, int item){
    if(s->top > STACK_SIZE){
        printf("Stack is full...\n");
    }else {
        s->data[s->top] = item;
        s->top += 1;
    }
}

//METHOD: Pop()
int pop(Stack *s) {
    int item;
    if(s->top<=0){
        printf("Your Stack is Empty. status: ");
        return -1;
    }else {
        s->top -=1;
        item = s->data[s->top];
    }
    return item;
}

//METHOD: Peek() => Return the top data of the stack without removing
int peek(Stack *s){
    int item;
    if(s->top<=0){
        printf("Stack is empty. status: ");
        return -1;
    }else {
        int position;
        position = s->top -1;
        item = s->data[position];
    }
    return item;
}


//METHOD: isEmpty()
bool isEmpty(Stack *s){
    if(s->top <= 0) return true;
    return false;
}


//METHOD: isFull()
bool isFull(Stack *s){
    int position = s->top - 1;
    if( position >= STACK_SIZE) return true;
    return false;
}