#include "treea.hpp"
#include <iostream>

TreeA::TreeA() : size{0}, leafsCount{0}
{
}



int TreeA::getSize()
{
    return vec.size();
}

int TreeA::countLeafs()
{

    return leafsCount;
}

int TreeA::getParant(int i)
{
    if (i == 0)
    {
        std::cout << "this is the root not have parant\n";
        return -1;
    }
    if (vec.at((i - 1) / 2))
        return vec.at((i - 1) / 2);

    std::cout << "this element not found\n";
    return -1;
}

int TreeA::getRight(int i)
{
    if (i >= vec.size())
    {
        std::cout << "this element not exist\n";
        return -1;
    }

    if (vec.at((2 * i) + 2))
        return vec.at((2 * i) + 2);

    std::cout << "this element have no right\n";
    return -1;
}

int TreeA::getLeft(int i)
{
    if (i >= vec.size())
    {
        std::cout << "this element not exist\n";
        return -1;
    }

    if (vec.at((2 * i) + 1))
        return vec.at((2 * i) + 1);

    std::cout << "this element have no left\n";
    return -1;
}

void TreeA::insert(int data)
{
    vec.push_back(data);
}

void TreeA::clear()
{
    if (isEmpty())
    {
        std::cout << "empty tree\n";
        return;
    }
    vec.clear();
}

void TreeA::BFStravers()
{

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";
}
void TreeA::inorder(int i)
{
    if (!(vec.at(i)))
        return;

    inorder((2 * i) + 1);
    std::cout << vec[i];
    inorder((2 * i) + 2);
}
void TreeA::inDFStravers()
{
    if (isEmpty())
    {
        std::cout << "empty tree to display\n";
        return;
    }
    inorder(0);
    std::cout << "\n";
}
void TreeA::preorder(int i)
{
    if (!(vec.at(i)))
        return;

    std::cout << vec[i];
    preorder((2 * i) + 1);
    preorder((2 * i) + 2);
}
void TreeA::priDFStravers()
{
    if (isEmpty())
    {
        std::cout << "empty tree to display\n";
        return;
    }
    preorder(0);
    std::cout << "\n";
}

void TreeA::postorder(int i)
{

    if (!(vec.at(i)))
        return;

    postorder((2 * i) + 2);
    std::cout << vec[i];
    postorder((2 * i) + 1);
}
void TreeA::postDFStravers()
{
    if (isEmpty())
    {
        std::cout << "empty tree to display\n";
        return;
    }
    postorder(0);
    std::cout << "\n";
}
void TreeA::remove()
{
}
