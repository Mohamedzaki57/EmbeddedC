#include"graph.h"
#include<iostream>


void Graph::dfsTraverse(int u ,std::vector<std::vector<int>> vec,std::vector<Color> color)
{
    if(color[u]==gray) return ;
    color[u]=gray;
    for(int v:vec[u])
    {
        if(vec[u][v] ==0 ) break;
        if(vec[u][v]== 1 && color[v] == gray) break;

        if(vec[u][v]== 1 && color[v] == white) dfsTraverse(v,vec,color);
         std::cout<<"from " << u <<" to "<< v;


    }

    color[u]=black;

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
