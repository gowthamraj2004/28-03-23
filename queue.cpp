#include<iostream>
using namespace std;
#define MAX_SIZE 20
#include <limits.h>

struct Queue{
    int arr[MAX_SIZE];
    int front = -1;
    int rear = -1;
};

Queue* createQueue(){
   struct Queue *q = new Queue();
//    q -> front =-1;
//    q -> rear =-1;
   return q;
};

void enqueue(struct Queue *q, int data){
    if(q -> rear == MAX_SIZE){
        cout<<"Queue is full";
    }
    if (q -> front == -1){
        q -> front++;
    }
    q -> arr[++ q->rear]= data;
    cout<<"Enqueued is :"<<data<<"\n";
}
int dequeue(struct Queue *q){
    if(q->front == -1){
        cout<<"Queue is Empty";
        return INT_MIN;
    }
    return q->arr[q->front];
}
int elementAtFront(struct Queue *q)
{
    if(q->front ==  -1){
        cout<<"Queue is Empty";
        return INT_MIN;
    }  
    return q->arr[q->front == -1];
};

int main(){
struct Queue *Q1 = createQueue();
struct Queue *Q2 = createQueue();

enqueue(Q1,3);
enqueue(Q1,5);
enqueue(Q1,8);
enqueue(Q2,4);
enqueue(Q2,7);
enqueue(Q2,6);
cout<<dequeue(Q1);
cout<<elementAtFront(Q2);
}