

#include <iostream>
#include <deque>
#include <stack>
#include "tree.hpp"

tree::tree() : root(nullptr), curNode(nullptr), nNode(nullptr), tsize(0), leafcounts(0)
{
}

tNode *tree::createNode(int d)
{

    tNode *newNode = new tNode();
    newNode->data = d;

    newNode->left = nullptr;
    newNode->right = nullptr;
    tsize++;

    return newNode;
}

tNode *tree::createTree()
{

    int rootVal;
    std::cout << "enter the root value (if empty -1) : ";
    std::cin >> rootVal;

    if (rootVal == -1)
        return nullptr;
    root = createNode(rootVal);
    que.push(root);

    int lval, rval;

    while (!que.empty())
    {
        curNode = que.front();
        que.pop();

        std::cout << "enter the left value (if empty -1) : ";
        std::cin >> lval;

        if (lval != -1)
        {

            nNode = createNode(lval);
            curNode->left = nNode;
            que.push(nNode);
        }

        std::cout << "enter the right value (if empty -1) : ";
        std::cin >> rval;

        if (rval != -1)
        {

            nNode = createNode(rval);
            curNode->right = nNode;
            que.push(nNode);
        }
        if (lval == -1 && rval == -1)
        {
            leafcounts++;
        }
    }

    return root;
}

int tree::sizetree()
{
    return tsize;
}

int tree::countLeafs()
{
    return leafcounts;
}

void tree::priDFStravers(tNode *root) const
{
    if (root == nullptr)
        return;

    std::cout << root->data;
    priDFStravers(root->left);
    priDFStravers(root->right);
}

void tree::inDFStravers(tNode *root) const
{
    if (root == nullptr)
        return;

    inDFStravers(root->left);

    std::cout << root->data;

    inDFStravers(root->right);
}

void tree::postDFStravers(tNode *root) const
{
    if (root == nullptr)
        return;
    postDFStravers(root->left);

    postDFStravers(root->right);

    std::cout << root->data;
}
void tree::BFStravers()
{
    if (root == nullptr)
        return;

    que.push(root);

    while (!que.empty())
    {
        tNode* current = que.front();
               que.pop();
        std::cout << current->data << " ";

        if (current->left)
            que.push(current->left);

        if (current->right)
            que.push(current->right);
       
    }
}

void tree::deletTree()
{
   if (root==nullptr)return;
   que.push(root);
   while(!que.empty())
   {
     tNode* current = que.front();
     delete current;
               que.pop();
        

        if (current->left)
            que.push(current->left);

        if (current->right)
            que.push(current->right);
       

   }
}
tree::~tree()
{ 
    tree::deletTree();
}
