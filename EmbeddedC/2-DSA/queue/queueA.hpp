#ifndef QUEUEA_H
#define QUEUEA_H


class queuea{

    private:
    int *arr;
    int size;
    int capacity;
    int front;
    int rear;
    public:
    queuea();
    void createQueue(int *,int n);
bool isEmpty();
bool isFull();
void enqueue(int);
void dequeue();
void display();
    ~queuea();
};

#endif
