

#include "List.hpp"
#include <iostream>
#include <vector>

List::List()
{
    head = nullptr;
    tail = nullptr;
    size = 0;
}

Node *List::createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = nullptr;

    return newNode;
}

void List::createList(int *arr, int n)
{
    head = createNode(arr[0]);
    head->next=tail;
    head->prev=nullptr;
     tail = head;
    size++;
    for (int i = 1; i < n; i++)
    {
        Node* temp =createNode(arr[i]);
        tail->next = temp;
        temp->prev=tail;
        tail =temp;
        size++;
    }
}

void List::display() const
{
    Node *temp = head;

    while (temp != nullptr)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int List::getSize() const
{
    return size;
}

int List::sum() const
{
    int s = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        s += temp->data;
        temp = temp->next;
    }

    return s;
}

void List::max() const
{
    if (head == nullptr)
    {
    }

    int ma = head->data;
    Node *temp = head->next;

    while (temp != nullptr)
    {
        if (temp->data > ma)
        {
            ma = temp->data;
        }

        temp = temp->next;
    }

    std::cout << ma << "\n";
}

Node *List::search(int k) const
{
    Node *temp = head;
    while (temp)
    {
        if (k == temp->data)
        {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}

void List::insertAtHead(int data)
{

    Node *newNode = createNode(data);
    newNode->next = head;
    if (head)
    {
        head->prev = newNode;
    }
    else
    {
        tail = newNode;
    }

    head = newNode;
    size++;
}
void List::insertAtEnd(int data)
{
    Node *newNode = createNode(data);

    newNode->prev = tail;
    if (tail)
    {
        tail->next = newNode;
    }
    else
    {
        head = newNode;
    }
    tail = newNode;
    size++;
}

void List::insertAtPos(int pos, int data)
{
    if (pos < 0 || pos > size)
    {
        std::cout << "out of range \n";
    }
    if (pos == 1 || pos == 0)
    {
        insertAtHead(data);
    }
    if (pos == size || pos == size + 1)
    {
        insertAtEnd(data);
    }
     else{

         Node *newNode = createNode(data);
    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp;
    newNode->prev = temp->prev;
    temp->prev->next = newNode;
    temp->prev = newNode;
    size++;
     }

}

void List::deleteAtHead()
{
    if (head == nullptr)
    {
        return;
    }
    Node *toDelete = head;
    head = head->next;
    if (head)
    {
        head->prev = nullptr;
    }
    else
    {
        tail = nullptr;
    }

    size--;
    delete toDelete;
}

void List::deleteAtEnd()
{
    if (tail == nullptr)
    {
        return;
    }

    Node *toDelete = tail;

    if (tail)
    {
        tail = tail->prev;
        tail->next=nullptr;
    }
    else
    {
        head = nullptr;
    }

    size--;
    delete toDelete;
}

void List::deleteAtPos(int pos)
{
    if (head == nullptr)
    {
        return;
    }
    if (pos < 0 || pos > size)
    {
        std::cout << "out of the range \n";
    }
    if (pos == 0 || pos == 1)
    {
        deleteAtHead();
    }
    if (pos == size)
    {
        deleteAtEnd();
    }
    else{

         Node *toDelete = head;
    Node * temp=head;

    for (int i = 1; i < pos; i++)
    {
        temp=toDelete;
        toDelete = toDelete->next;
        toDelete->prev=temp;

    }

    temp->next = toDelete->next;
    toDelete->next->prev = temp;
    delete toDelete;
    size--;
    }

}

void List::freeLL()
{
    if (head == nullptr)
    {
        return;
    }
    Node *toDelete;
    while (head)
    {
        deleteAtHead();
    }
    size = 0;
}

int main()
{

    List l;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    l.createList(arr, 7);
    l.display();
    l.max();
    l.deleteAtEnd();
    l.display();
    l.deleteAtHead();
    l.display();
    l.deleteAtPos(2);
    l.display();
    l.insertAtHead(7); //
    l.display();
    l.insertAtEnd(1);
    l.display();
    l.insertAtPos(3, 8);  //
    l.display();
}
