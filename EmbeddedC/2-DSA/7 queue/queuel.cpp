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



void queuel::enqueue(int d)
{
    Node* newNode =new Node();
     newNode->data=d;
    if(isEmpty()){
        front=newNode;
        rear=newNode;
        size++;
        return;
    }
    
    newNode->next=rear;
    rear = newNode;
    size++;
    return;
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
        
    }
   else{

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
        std::cout<<temp->data;
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