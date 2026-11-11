
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
void stackl::push(int data)
{
    Node *newnode = new Node();
    newnode->data = data;
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
int stackl::peak()
{
    if (isEmpty())
    {
        std::cout << "empty stack\n";
        return;
    }

    return top->data;
}

void stackl::display()
{
    if (isEmpty())
    {
        std::cout << "Empty stack to display\n";
        return;
    }

    while (top)
    {
        std::cout << top->data << "  ";
        top = top->next;
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