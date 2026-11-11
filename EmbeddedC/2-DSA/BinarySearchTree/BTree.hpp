
#ifndef BTREE_h
#define BTREE_h
#include<stack>


typedef struct BNood
{
    int data;
  struct  BNood* left;
  struct  BNood* right;
}BNood;



class BTree
{
private:
    BNood * root;
    BNood* curNode;
    int Bsize;

    BNood * createBNood(int);
    void freeTree(BNood * node);
    void inorder(BNood* node);
    BNood* helpSearch(BNood*node,int k);
    BNood* delete_h(BNood* node,int k);
    BNood* insert_h(BNood * node,int k);

public:
    BTree();
    void Rsearch(int );
    void search(int);
    void createBTree(int *arr,int n);
    void insert( int data);
    void insertR(int data);
    bool isEmpty();
    int size();
    BNood* predessor(BNood *);
    void deleteB(int);
    void display();
    ~BTree();
};




#endif
