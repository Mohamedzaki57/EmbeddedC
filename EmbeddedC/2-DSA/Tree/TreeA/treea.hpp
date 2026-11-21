#ifndef TREEA_HPP
#define TREEA_HPP
#include<vector>
#include<queue>

class TreeA{

    private:

    std::vector<int> vec;
    std::queue<int> que;
    int size;
    int leafsCount;
    void inorder(int);
    void preorder(int);
    void postorder(int);

    public:

    TreeA();
     bool isEmpty();
     int getSize();
     int getParant(int);
     int getLeft(int);
     int getRight(int);

     void insert(int);
     void remove();
     void clear();
     void search();

    int countLeafs();

    void BFStravers();
    void priDFStravers();
    void inDFStravers();
    void postDFStravers();


    ~TreeA();
};
#endif
