#ifndef HTREE_HPP
#define HTREE_HPP
#include<vector>
class HTree {

    private:
     std::vector<int> Heap;
     int size;

    public:
    HTree();
    void buildHeap(std::vector<int>);
    void insert(int);
    int remove();
    void display();
    bool isEmpty();
    int getSize();
    ~HTree();

};
#endif
