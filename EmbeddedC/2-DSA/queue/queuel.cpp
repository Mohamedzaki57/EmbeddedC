#include"queuel.hpp"

#include<iostream>


queuel::queuel(){
    front=nullptr;
    rear=nullptr;
    size=0;
}

bool queuel::isEmpty(){

    return size==0;

}
Node* queuel::createNode(int d)
{

    Node* newNode =new Node();
    newNode->next=nullptr;
    newNode->data=d;
    return newNode;
}


void queuel::enqueue(int d)
{
    Node *newNode =createNode(d);

    if(isEmpty()){
        front=newNode;
        rear=newNode;
        front->next=rear;


    }

    rear->next=newNode;
    rear = newNode;
    size++;
    return;
}

void queuel::createQueue(int *arr,int n)
{
  if(arr==nullptr) return;
  for(int i=0;i<n;i++)
  {
    enqueue(arr[i]);
  }
}
void queuel::dequeue(){
    if(isEmpty()){
        std::cout<<"empty queue \n";
        return;
    }
       Node* todelete;
       todelete=front;
    if(size==1){

        front=nullptr;
        rear=nullptr;
        delete todelete;
        size--;
    }
   else{
    size--;
    front =front->next;
    delete todelete;
   }

      return;
}

void queuel::display(){

    if(isEmpty()) {
        std::cout<<"this is empty\n";
        return;
    }
      Node* temp=front;
    for(int i=0 ;i<size; i++)
    {
        std::cout<<temp->data<<" ";
        temp =temp->next;
    }

    std::cout<<std::endl;
    return;
}

queuel::~queuel(){
    delete front;
    delete rear;
    front =nullptr;
    rear=nullptr;
}

int main(){

    queuel q,n;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();

    int arr[]={1,2,3,4,5,6,7};
    n.createQueue(arr,7);
    n.display();
    n.dequeue();
    n.dequeue();
    n.dequeue();
    n.display();

}
