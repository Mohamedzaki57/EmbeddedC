#ifndef QUEUEL_L
#define QUEUEL_L

typedef struct Node{

    int data;
    struct Node* next;
}Node;

class queuel{
     public:

     queuel();
     Node* createNode();
     Node* initqueue(int );
     bool isEmpty();
     void enqueue(int);
     void dequeue();
     void display();
     ~queuel();

     private:
       Node* front;
       Node* rear;
       int size;

};
#endif