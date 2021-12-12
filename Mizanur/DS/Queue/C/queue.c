#include <stdio.h>
#include <stdbool.h>
#define SIZE 10

typedef struct 
{
    int front;
    int rear;
    int data[SIZE];
} Queue;

//function protorype
bool isFull(Queue *s);
bool isEmpty(Queue *s);
void enQueue(Queue *s, int item);
int deQueue(Queue *s);
void display(Queue *s);

int main(void){
    Queue my_queue;
    my_queue.front = -1;
    my_queue.rear = -1;

    enQueue(&my_queue, 8);
    enQueue(&my_queue, 55);
    enQueue(&my_queue, 10);
    enQueue(&my_queue, 26);
    deQueue(&my_queue);
    deQueue(&my_queue);
    display(&my_queue);
    display(&my_queue);
    display(&my_queue);
    deQueue(&my_queue);
    isEmpty(&my_queue);
    deQueue(&my_queue);
    isEmpty(&my_queue);

    return 0;
}


//QUEUE METHODS:
//enQueue()
//Dequeue()
//isEmpty()
//isFull()
//Peek()

bool isFull(Queue *s){
    if(s->rear >= SIZE-1) return true;
    else return false;
}

bool isEmpty(Queue *s){
    if(s->front == -1){
        printf("Queue is empty!\n");
        return true;
    }else{
        printf("Queue is not empty!\n");
        false;
    }
}

void enQueue(Queue *s, int item){
    if(isFull(s)){
        printf("Queue is Full..\n");
    }else{
        if(isEmpty(s)){
            s->front = 0;
            s->rear +=1;
            s->data[s->rear] = item;
            printf("Inserted first element --> %d\n\n", item);
        }else{
            s->rear += 1;
            s->data[s->rear] = item;
            printf("Inserted --> %d\n\n", item);
        }
    }
}


int deQueue(Queue *s){
    int item;
    if(isEmpty(s)){
        printf("Queue is empty. Status: ");
        return -1;
        printf("\n\n");
    }else{
        item = s->data[s->front];
        s->front += 1;
        printf("Deleted --> %d\n\n", item);
        if(s->front > s->rear){
            s->front = s->rear = -1;
        }
    }
    
    return item;
}


void display(Queue *s){
    if(isEmpty(s)){
        printf("Nothing to display. Queue is empty!");
    }else{
        int item;
        item = s->data[s->front];
        printf("Top item --> %d\n\n", item);
    }
}