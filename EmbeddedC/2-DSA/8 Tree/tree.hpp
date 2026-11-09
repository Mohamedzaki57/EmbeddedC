#ifndef TREE_HPP
#define TREE_HPP
#include<queue>
#include<stack>
typedef struct tNode{
    
    struct tNode * left;
    int data;
    struct tNode * right;

}tNode;

class tree{
    private:
    std::queue<tNode *> que;
     tNode * root;
     tNode* curNode;
     tNode* nNode;
     int tsize;
     int leafcounts;
     std::stack<tNode*> stck;
    
     public:
       tree();
       tNode* createNode(int);
       tNode* createTree( );
       int  sizetree();
       int countLeafs();
       void BFStravers();
       void priDFStravers(tNode*) const;
       void inDFStravers(tNode *) const;
       void postDFStravers(tNode *) const;
       void deletTree();
       
       ~tree();



};
#endif