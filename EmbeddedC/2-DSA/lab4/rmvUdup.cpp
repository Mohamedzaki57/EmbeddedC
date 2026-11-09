#include <iostream>
#include <vector>
#include <algorithm>

void vec_vecremoveduplicusort(std::vector<int> &vec);
int main(void)
{

    std::vector<int> v{10, 15, 7, 1, 7, 20, 1, 9, 10, 15};
    vec_vecremoveduplicusort(v);
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

void vec_vecremoveduplicusort(std::vector<int> &vec)
{


    std::vector<int>::iterator tr = std::max_element(vec.begin(), vec.end());
    int tSize = *tr;
    std::vector<int> freqVec(tSize + 1, 0);
    
    int sErase = vec.size() - 1;

    for (int i = 0; i < vec.size(); i++)
    {
       freqVec.at(vec[i]) ++;
    }

    for (int i = 0; i < vec.size(); i++)
    {

        if (freqVec[vec[i]] > 1)
        {
              freqVec[vec[i]] --;
            vec.erase(vec.begin()+i);
            
          
        }
        
    }
    
    // std::vector<int>::iterator it = vec.begin() + sErase;
    // while (sErase < vec.size())
    // {
    //     it = vec.erase(it);
    //     sErase++;
    // }

}