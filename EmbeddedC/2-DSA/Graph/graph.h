#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include<stack>
#include<queue>
typedef enum{
    white,
    gray,
    black
}Color;
class Graph{

    private:
    std::vector<std::vector<int>> vec;
    std::vector<Color> color;

     void dfs(int , std::vector<std::vector<int>> , std::vector<int> , std::vector<int>&);
    public:

    std::vector<int> dfsTraverse(int, std::vector<std::vector<int>> );
    std::vector<int> BFSTraverse(std::vector<std::vector<int>>,int);


};

#endif
