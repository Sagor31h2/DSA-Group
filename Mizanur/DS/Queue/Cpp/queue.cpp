#include <iostream>
#define QUEUE_SIZE 10

using namespace std;

class Queue {
    private:
    int data[QUEUE_SIZE], front, rear;

    public:
    Queue(){
        front = rear = -1;
    }

    bool isEmpty(){
        return front == -1 ? true : false;
    }

    bool isFull(){
        return rear == QUEUE_SIZE - 1 && front == -1 ? true : false;
    }

    void enQueue(int item){
        if(isFull()){
            cout << "Queue is full";
            return;
        }else{
            if(front == -1) front = 0;
            ++rear;
            data[rear] = item;
            cout << "inserted -->" << item << endl;
        }
    }


    int deQueue(){
        int item;
        if(isEmpty()){
            cout << "Queue is empty!" << endl;
            return -1;
        }else{
            item = data[front];
            ++front;
            if(front >= rear) {
                front = rear = -1;
            }
        }

        return item;
    }

    void peek(){
        int item;
        if(isEmpty()){
             cout << "Queue is empty" << endl;
             return;
        }
        item = data[front];
        cout << endl
            << "Front item -->" << item << endl;
    }

    void display(){
        int i;
        if(isEmpty()){
             cout << endl << "Queue is empty!" << endl;
             return;
        }

        cout << "Display:" << endl;
        cout << endl << "FRONT = " << front;
        for(i = front; i<= rear; ++i){
            cout << endl << "Item = " << data[i] << endl;
        }
    }

};


int main(void){
    Queue q;
    q.peek();
    q.isEmpty() ?  cout << "Queue is empty" << endl : cout << "Queue is not empty" << endl;
    q.enQueue(5);
    q.enQueue(6);
    q.enQueue(7);
    q.isEmpty() ? cout << "Queue is empty" : cout << "Queue is not empty";
    q.peek();
    q.deQueue();
    q.peek();
    q.enQueue(9);
    q.enQueue(11);
    q.enQueue(13);
    q.enQueue(15);
    q.display();
}