#ifndef STACKA_H
#define STACKA_H

class stackA
{

private:
   int *arr;
   int capacity;
   int size;
   int top;

public:
   stackA();

   void push(int);
   void pop();
   void peak();
   bool isEmpty();
   bool isFull();

   void display();
   void freeS();
   ~stackA();
};
#endif