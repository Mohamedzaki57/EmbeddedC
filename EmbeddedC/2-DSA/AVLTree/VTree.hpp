#ifndef VTREE_HPP
#define VTREE_HPP
#include <stack>

struct VNode
{
    int data;
    VNode *left;
    VNode *right;
    int hight;
};

class VTree
{
private:
    VNode *root;
    int size;
    std::stack<VNode *> stk;
    int balance;
    void inorder(VNode *);
    int getHight(VNode *);
    VNode *createVNode(int data);
    VNode *insert_h(VNode *, int);
    VNode *rightRotate(VNode *);
    VNode *leftRotate(VNode *);
    VNode *predessor(VNode *);
    VNode *delete_h(VNode *, int);

public:
    VTree();
    void createVTree(int *arr, int k);
    void insertV(int);

    void deleteV(int);
    void search(int);
    void display();
    bool isEmpty();
};
#endif
