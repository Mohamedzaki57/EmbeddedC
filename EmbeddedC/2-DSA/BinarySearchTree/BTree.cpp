

#include "BTree.hpp"
#include <iostream>
#include <stack>

BTree::BTree() : root{nullptr}, curNode{root}, Bsize{0}
{
}
BNood *BTree::createBNood(int data)
{

    BNood *newNode = new BNood;
    newNode->left = newNode->right = nullptr;
    newNode->data = data;

    return newNode;
}
bool BTree::isEmpty()
{
    return Bsize == 0;
}

BNood * BTree::helpSearch(BNood* node ,int k)
{
    if(!node) return nullptr;

    if(node->data==k)
    {
        return node;
    }
    else if(node->data <k)
    {
        return helpSearch(node->right,k);
    }
    else if(node->data >k)
    {
        return helpSearch(node->left,k);
    }


}
void BTree::Rsearch(int data)
{
    if(root == nullptr) return;

    BNood* temp=helpSearch(root,data);

   if(!temp) std::cout<<"not found\n";
   else std::cout<<temp->data<<" element u search\n";
}

void BTree::search(int data)
{

    if (root == nullptr)
    {
        std::cout << "empty tree\n";
        return;
    }

    curNode = root;
    while (curNode)
    {
        if (curNode->data == data)
        {
            std::cout << "the element found:" << curNode->data << "\n";
            return;
        }
        else if (curNode->data > data)
        {
            curNode = curNode->left;
            break;
        }
        else if (curNode->data < data)
        {
            curNode = curNode->right;
            break;
        }
    }
    if (!curNode)
    {
        std::cout << "the element not found\n";
    }
}


void BTree::createBTree(int *arr, int n)
{
    if (n == 0)
    {
        std::cout << "empty array\n";
        return;
    }


    root = createBNood(arr[0]);
    Bsize++;
    std::stack<BNood *> stk;
     stk.push(root);


    for (int i = 1; i < n; i++)
    {
        BNood* temp =nullptr;

        while(!stk.empty() && arr[i]>stk.top()->data)
        {
            temp =stk.top();
            stk.pop();
        }
        if(temp){

            temp->right=createBNood(arr[i]);
            Bsize++;
            stk.push(temp->right);

        }
        else{
            stk.top()->left=createBNood(arr[i]);
            Bsize++;
            stk.push(stk.top()->left);
        }

    }
}

BNood * BTree::insert_h(BNood* node,int k)
{
    if(!node)
    {
     Bsize++;
     return createBNood(k);
    }
    if(k> node->data)
    {
        node->right=insert_h(node->right,k);
    }
    else if(k< node->data)
    {
        node->left=insert_h(node->left,k);
    }

        return node;

}
void BTree::insertR(int data){
    root = insert_h(root,data);
}
/*

void BTree::insert(int data)
{
    if (root == nullptr)
    {
        Bsize++;
        root = createBNood(data);
    }

    curNode = root;
    while (curNode)
    {
        if (curNode->data == data)
        {
            return;
        }
        else if (curNode->data < data)
        {
            curNode = curNode->right;
            break;
        }
        else if (curNode->data > data)
        {
            curNode = curNode->left;
            break;
        }
    }
    if (!curNode)
    {
        curNode = createBNood(data);
    }
}
*/
BNood* BTree::predessor(BNood *node){

    if(node->right)
    {
        node =node->right;
    }

    return node;
}
BNood* BTree::delete_h(BNood* node,int k){

    if(node==nullptr) return nullptr;

    if(k <node->data)
    {
      node->left=delete_h(node->left,k);
    }
    else if(k > node->data)
    {
        node->right=delete_h(node->right,k);
    }
    else{
        if(node->left==nullptr && node->right==nullptr)
        {
            delete node;
            Bsize--;
            return nullptr;
        }
        else if (!node->left)
        {
            BNood* temp=node->right;
            delete node;
            Bsize--;
            return temp;
        }
        else if(!node->right)
        {
            BNood* temp=node->left;
            delete node;
            Bsize--;
            return temp;
        }
        else {

            BNood* pre= predessor(node->left);
            node->data=pre->data;
            node->left=delete_h(node->left,pre->data);

            Bsize--;


        }
    }
    return node;
}
void BTree::deleteB(int d){

      if(!root) return;
    root =delete_h(root,d);
}
int BTree::size()
{
    return Bsize;
}
void BTree::inorder(BNood *node)
{
    if (!node)
       {
           return  ;
       }
    inorder(node->left);
    std::cout << node->data <<" ";
    inorder(node->right);
}
void BTree::display()
{

    if (isEmpty())
        std::cout << "empty tree\n";

    inorder(root);

}
void BTree::freeTree(BNood *node)
{
    if (node == nullptr)
        return;
    freeTree(node->left);
    freeTree(node->right);
    delete node;
}
BTree::~BTree()
{
    freeTree(root);
}


int main(void)
{

    BTree t;
    BTree n;
    int arr[]={9,7,5,11,13,14};
    n.createBTree(arr,6);
    n.display();
    n.deleteB(9);
    n.display();
    std::cout<<"\nwe are hare\n";
    t.insertR(30);
    t.insertR(20);
    t.insertR(10);
    t.insertR(40);
    t.insertR(50);
    t.deleteB(10);
    t.Rsearch(40);
    t.display();



}
