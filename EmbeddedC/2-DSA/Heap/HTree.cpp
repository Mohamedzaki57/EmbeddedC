#include"HTree.hpp"
#include<iostream>

HTree::HTree():size{0}{}

bool HTree::isEmpty(){
    return size==0;
}

int HTree::getSize(){
    return Heap.size();
}

void HTree::insert(int data)
{
    Heap.push_back(data);
    size++;
    int newval= data;
    int i=Heap.size()-1;
    while (i>0 && newval > Heap[(i-1)/2])
    {
         Heap[i]=Heap[(i-1)/2];
        i=(i-1)/2;
    }

    Heap[i]=newval;
}

void HTree::buildHeap(std::vector<int> vec)
{

    for(int i=0; i<vec.size(); i++)
    {
        insert(vec[i]);
    }

}

void HTree::display(){

    for(int i=0; i<Heap.size(); i++)
    {
        std::cout<<Heap[i]<<" ";
    }
    std::cout<<"\n";
}

int HTree::remove(){

    if(isEmpty())return-1;

    int deleted=Heap[0];

    Heap[0]=Heap[Heap.size()-1];
    Heap[Heap.size()-1]=deleted;
    Heap.pop_back();
    return deleted;


}
