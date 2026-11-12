
#include<iostream>

#include"queueA.hpp"

 queuea::queuea(){

  size=0;
  front=0;
  rear=-1;
  capacity=100;
  arr =new int(100);

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

    rear=(++rear )%capacity;
    size++;
    arr[rear]=data;



}

void queuea::dequeue(){

  if(isEmpty()) {
    std::cout<< "empty queue to dequeue\n";
    return;

  }

  front=(front+1)%capacity;
  size--;
}
void queuea::createQueue(int *arr,int n)
{
  if(arr==nullptr) return;
  for(int i=0;i<n;i++)
  {
    enqueue(arr[i]);
  }
}
void queuea::display(){

  if(isEmpty()){
    std::cout<<"empty queue to display\n";
    return ;
  }

  for(int i=front ; i<=rear ; i++)
  {
    std::cout<<arr[i]<<" ";

  }
  std::cout << std::endl;
}

queuea::~queuea(){
  delete []arr;
}


int main(){

  queuea q;
  queuea r;
  int arr2[]={1,2,3,4,5,6,7};
  r.createQueue(arr2,7);
  r.display();

  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(4);
  q.display();

  q.dequeue();
  q.dequeue();
  q.dequeue();

  q.display();


}
