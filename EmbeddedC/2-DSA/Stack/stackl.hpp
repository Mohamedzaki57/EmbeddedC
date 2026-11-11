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
      

   public:
      stackl();

      void push(int);
      void pop();
      int peak() ;
      bool isEmpty();
      void mkStack();
      void display() ;
      void freeS();
      ~stackl();


};
#endif