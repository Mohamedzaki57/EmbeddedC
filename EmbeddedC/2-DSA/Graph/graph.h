#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include<stack>
typedef enum{
    white,
    gray,
    black
}Color;
class Graph{

    private:
    std::vector<std::vector<int>> vec;
    std::vector<Color> color;
    std::stack<int> stk;
     void dfs_help();
    public:

    void dfsTraverse(int, std::vector<std::vector<int>> ,std::vector<Color>);
    void bfsTraverse(std::vector<std::vector<int>>,std::vector<Color>);


};

#endif
