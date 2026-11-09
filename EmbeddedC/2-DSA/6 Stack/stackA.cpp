#include "stackA.hpp"
#include <iostream>


stackA::stackA(){
    arr=new int[100];
    size=0;
    capacity=100;
    top=-1;

}
bool stackA::isFull(){
    return size==capacity;
}
void stackA::push(int data)
{ 
    if(size==capacity){return;}
    arr[size]=data;
    top++;
    size++;

}
bool stackA::isEmpty(){
    return size==0;
}
void stackA::pop()
{
    if(isEmpty()){std::cout<<"empty stack\n ";}
    else {
    
        top--;
        size--;
    }
}

void stackA::peak()
{
    if(isEmpty())
    {
        std::cout<<"empty stack\n";
        return;
    }

    std::cout<<arr[top];
    
}

void stackA::display(){

    if(isEmpty()){std::cout<<"empty stack\n";}
    else{
         
        for(int i=size-1 ; i>=0 ; i--)
        {
            std::cout<<arr[i]<<" ";
        }
        std::cout<<"\n";
    }
    
}

void stackA::freeS(){
    
    for (int i=size-1 ; i>= 0 ; i--)
    {
        arr[i]==0;
        
    }

    top = -1;
    size =0;
}

stackA::~stackA(){
    delete arr;
}