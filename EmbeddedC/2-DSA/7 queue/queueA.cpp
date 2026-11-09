
#include<iostream>

#include"queueA.hpp"

 queuea::queuea(){

  size=0;
  front=0;
  rear=-1;
  capacity=100;

}

bool queuea::isEmpty(){

  return size==0;
}

bool queuea::isFull(){
  return size==capacity;
}

void queuea::enqueue( int data)
{
    if(isFull()) {
      std::cout<<"full queue to fill\n";
      return;
    }

    rear=(rear +1)%capacity;
    arr[rear]=data;
    size++;
    

}

void queuea::dequeue(){

  if(isEmpty()) {
    std::cout<< "empty queue to dequeue\n";
    return;

  }
  std::cout<<arr[front];
  front=(front+1)%size;
  size--;
}

void queuea::display(){

  if(isEmpty()){
    std::cout<<"empty queue to display\n";
    return ;
  }

  for(int i=front ; i<rear ; i++)
  {
    std::cout<<arr[i];

  }

}

queuea::~queuea(){
  delete []arr;
}