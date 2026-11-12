#ifndef LIST_HPP
#define LIST_HPP

 typedef struct Node{
        struct Node* prev;
        int data;
        struct Node* next;
     }Node;
class List{

    private:
       Node* head;
       Node* tail;
       int size=0;

       Node* createNode(int data);

    public:


     List();


     void createList(int *arr,int n);
     void display() const;

     int getSize() const;
     int sum()const;
     void max() const;
     Node* search( int k) const;

     void insertAtHead(int data);
     void insertAtEnd(int data);
     void insertAtPos(int pos,int data);

     void deleteAtHead();
     void deleteAtEnd();
     void deleteAtPos( int pos);
     void freeLL();


};
#endif
