
#include "stackl.hpp"
#include <iostream>
stackl::stackl()
{
    top->next = nullptr;
    size = 0;
}

bool stackl::isEmpty()
{

    if (size == 0)
        return true;
    else
        return false;
}
Node* stackl::createNode(int d)
{

    Node* newNode =new Node();
    newNode->next=nullptr;
    newNode->data=d;
    return newNode;
}

void stackl::push(int data)
{
    Node *newnode = createNode(data);
    newnode->next = top;
    top = newnode;
    size++;
}

void stackl::pop()
{
    if (isEmpty())
        return;

    Node *temp = top;
    top = top->next;
    delete (temp);
    size--;
}
void stackl::peak()
{
    if (isEmpty())
    {
        std::cout << "empty stack\n";
        return;
    }
    std::cout<<top->data<<"\n";
    return ;
}

void stackl::display()
{
    if (isEmpty())
    {
        std::cout << "Empty stack to display\n";
        return;
    }

    Node *temp=top;
    while (temp->next)
    {
        std::cout << temp->data << "  ";
        temp = temp->next;
    }
    std::cout << " \n";
}

void stackl::freeS()
{
    if (isEmpty())
    {
        std::cout << "underflow stack to free\n";
        return;
    }

    Node *temp = top;
    while (top)
    {
        top = top->next;
        delete temp;
    }
}

stackl::~stackl()
{
    delete top;
}

int main(){

stackl s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.display();
    s.peak();
    s.pop();
    s.pop();
    s.peak();
    s.display();
}
