#include "VTree.hpp"
#include <algorithm>
#include <iostream>


VTree::VTree() : root{nullptr}, size{0} {}
VNode *VTree::createVNode(int data)
{

    VNode *newNode = new VNode();
    newNode->data = data;
    newNode->hight = 0;
    newNode->left = nullptr;
    newNode->right = nullptr;

    return newNode;
}

bool VTree::isEmpty(){
    return size==0;

}
///////////insertions////////////
VNode *VTree::insert_h(VNode *node, int data)
{
    if (node == nullptr)
    {
        node = createVNode(data);
        return node;
    }

    if (node->data > data)
    {
        stk.push(node);


        node->left = insert_h(node->left, data);

    }
    else if (node->data < data)
    {
         stk.push(node);

        node->right = insert_h(node->right, data);
    }
    else {
        return node;
    }


    VNode* grand =stk.top();
    grand->hight=getHight(grand);

    if(grand->hight ==2 && getHight(grand->left)>0)
    {
        grand=rightRotate(grand);

    }
    else if(grand->hight ==-2 && getHight(grand->right)<0)
    {
       grand= leftRotate(grand);

    }
    else if(grand->hight ==2 && getHight(grand->left)<0)
    {
        grand->left=leftRotate(grand->left);
        grand= rightRotate(grand);
    }
    else if(grand->hight ==-2 && getHight(grand->right)>0)  //R.L
    {
        grand->right=rightRotate(grand->right);
       grand= leftRotate(grand);
    }

    return node;
}

void VTree::insertV(int data)
{

    root = insert_h(root, data);
    size++;
}
////////////creation the tree////////
void VTree::createVTree(int *arr,int k){

    for(int i=0;i<k;i++)
    {
       insertV(arr[i]);
    }


}
///////////display/////
void VTree::inorder(VNode *node)
{
    if (!node)
    {
        return;
    }
    inorder(node->left);
    std::cout << node->data << " ";
    inorder(node->right);
}
void VTree::display()
{

    if (isEmpty())
        std::cout << "empty tree\n";

    inorder(root);
}
int VTree::getHight(VNode *node)
{
    if (!node)
        return 0;
    VNode *temp = node;
    while (temp->left)
    {
        node->hight++;
        temp = temp->left;
    }

    while (temp->right)
    {
        node->hight--;
        temp = temp->right;
    }

    return node->hight;
}
VNode *VTree::rightRotate(VNode *A)
{
    VNode *B = A->left;
    VNode *BR = B->right;

    B->right = A;
    A->left = BR;

     B->hight = 1 + getHight(B);
    A->hight = 1 + getHight(A);


    return B;
}

VNode *VTree::leftRotate(VNode *A)
{
    VNode *B = A->right;
    VNode *BL = B->left;

    B->left = A;
    A->right = BL;

     B->hight = 1 + getHight(B);
    A->hight = 1 + getHight(A);


    return B;
}
///////delation//////////////
VNode* VTree::predessor(VNode *node){

    if(node->right)
    {
        node =node->right;
    }

    return node;
}
VNode* VTree::delete_h(VNode* node,int k){

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
            size--;
            return nullptr;
        }
        else if (!node->left)
        {
            VNode* temp=node->right;
            delete node;
            size--;
            return temp;
        }
        else if(!node->right)
        {
            VNode* temp=node->left;
            delete node;
            size--;
            return temp;
        }
        else {

            VNode* pre= predessor(node->left);
            node->data=pre->data;
            node->left=delete_h(node->left,pre->data);

            size--;


        }
    }
    return node;
}
void VTree::deleteV(int d){

      if(!root) return;
    root =delete_h(root,d);
}

int main(void){

    VTree v;

    v.insertV(50);
    v.insertV(40);
    v.insertV(30);
    v.insertV(20);
    v.insertV(10);
    v.display();

}
