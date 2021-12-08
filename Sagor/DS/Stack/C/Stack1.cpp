#include<iostream>
using namespace std;

// defing the size;
#define Limit 100
class MyStack{
    private: 
        int top = -1;
        int stack[Limit];

    public:

    //pop function
    int push(int x){

     if (top>Limit)
     {
       cout << "\n\nstack is full" << endl;
     }
     else{
         stack[++top] = x;
         cout << "\n\n==>Pushing --- " << x << endl;
     }    
    }

    //Poping

     int pop(){

     if (top<0)
     {
       cout << "\n\nstack is Empty" << endl;
     }
     else{
        int x= stack[top--] ;
         cout << "\n\n<==Poping --- " << x << endl;
         return x;
     }    
    }

    //checking peek
    int peek(){

     if (top<0)
     {
       cout << "\n\nstack is Empty" << endl;
     }
     else{
        int x= stack[top] ;
         cout << "\n\n---Peek is --- " << x << endl;
         return x;
     }    
    }
    
};

int main(){
    class MyStack ms;
    ms.push(3);
    ms.push(9);
    ms.push(2);

    ms.peek();

    ms.pop();

    ms.peek();
}