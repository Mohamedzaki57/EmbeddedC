#include"graph.h"
#include<iostream>

void Graph::dfs(int v  , std::vector<std::vector<int>> vec , std::vector<int> vis , std::vector<int> & ls)
{
    vis[v]=1;
    ls.push_back(v);

    for(int i : vec[v])
    {
        if(!vis[i])
        {
            dfs(i,vec , vis ,ls);
        }
    }
}

std::vector<int> Graph::dfsTraverse(int u ,std::vector<std::vector<int>> vec)
{

    std::vector<int> vis{};
    vis[0]=1;
    std::vector<int> ls;

    dfs(u,vec,vis,ls);

    return ls;

}

std::vector<int> Graph::BFSTraverse(std::vector<std::vector<int>> vec , int u)
{
    std::vector<int> vis(vec.size()+1, 0);
    vis[0]=1;

    std::queue<int> que;
    que.push(u);
    vis[u]=1;
    std::vector<int> bfs;

    while (!que.empty())
    {
        int node=que.front();
        que.pop();

        bfs.push_back(node);

        for(int i : vec[node])
        {
            if(!vis[i])
            {
                vis[i]=1;
                que.push(i);

            }

        }


    }

    return bfs;


}






int main(void)
{
    std::vector<std::vector<int>> vec1 ={
        {0	,1	,0	,1	,1	,0},
        {1	,0	,1	,1	,0  ,0},
        {0	,1	,0	,0	,0	,1},
        {1	,1	,0	,0	,1	,0},
        {1	,0	,0	,1	,0	,1},
        {0	,0	,1	,0	,1	,0},
    };

    std::vector<Color> color1 ={white,white,white,white,white,white};

   Graph g;
   g.dfsTraverse(0,vec1,color1);
}
