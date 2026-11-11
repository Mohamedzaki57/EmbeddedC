#ifndef TREE_HPP
#define TREE_HPP
#include <queue>
#include <stack>
typedef struct tNode
{

    struct tNode *left;
    int data;
    struct tNode *right;

} tNode;

class tree
{
private:
    std::queue<tNode *> que;
    tNode *root;
    tNode *curNode;
    tNode *nNode;
    int tsize;
    int leafcounts;
    std::stack<tNode *> stck;
    tNode *createNode(int);
    void preorder(tNode *) const;
    void inorder(tNode *) const;
    void postorder(tNode *) const;

public:
    tree();

    tNode *createTree();
    int sizetree();
    int countLeafs();
    void BFStravers();
    void priDFStravers();
    void inDFStravers();
    void postDFStravers();
    void deletTree();

    ~tree();
};
#endif
