#ifndef STACKL_H
#define STACKL_H

typedef struct Node
{
     Node *next;
     int data;
}Node;

class stackl{

    private:
      Node *top;
      int size;
     Node* createNode(int d);

   public:
      stackl();

      void push(int);
      void pop();
      void peak() ;
      bool isEmpty();
      void mkStack();
      void display() ;
      void freeS();
      ~stackl();


};
#endif
