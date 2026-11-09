#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

void vec_vecremoveduplicusort(std::vector<int> &vec);
int shortSubArray(std::vector<int> vec, int k);
int subArrSameK(std::vector<int> vec, int k);
int maxAvr(std::vector<int> vec , int k);
int main(void)
{

    std::vector<int> v{10,20,30,4,5,6,7};
    std::cout << maxAvr(v, 2);

    // std::vector<int> v{1, 1, 1, 1, 1, 1};
    // std::cout << subArrSameK(v, 2);
    // this for short sub array
    //  std::vector<int> v{10, 15, 7, 1, 7, 20, 1, 9, 10, 15};

    // std::cout << shortSubArray(v, 21);

    // this remove duplicat elements in unsorted array
    //
    // vec_vecremoveduplicusort(v);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     std::cout << v[i] << " ";
    // }
    // std::cout << std::endl;
}
int maxAvr(std::vector<int> vec , int k)
{
    int sum=0;
    int maxA=INT_MIN;
    int tempmax=0;
    for (int i=0 ; i<vec.size();i++)
    {

        for (int j=i;j<k+i && i<vec.size()-k;j++)
        {
           sum+=vec[j];
           
        }
        tempmax=sum;
        if(tempmax>maxA)
        {
            maxA=tempmax;
        }
        sum=0;
        tempmax=0;
    }
    return maxA/k;
}
int subArrSameK(std::vector<int> vec, int k)
{
    int sum = 0;
    int count = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        if (sum < k)
        {
            sum += vec[i];

            if (sum == k)
            {
                count++;
                sum = vec[i];
            }
        }
    }
    return count;
}

int shortSubArray(std::vector<int> vec, int k)
{
    int sum = 0;
    int count = 0;
    int minCount = vec.size();

    for (int i = 0; i < vec.size(); i++)
    {

        int j = i;
        while (sum < k && j < vec.size())
        {

            sum += vec[j];

            if (count <= minCount)
            {
                count++;
            }
            j++;
        }
        minCount = count;
        count = 0;
        sum = 0;
    }

    return minCount;
}

void vec_vecremoveduplicusort(std::vector<int> &vec)
{

    std::vector<int>::iterator tr = std::max_element(vec.begin(), vec.end());
    int tSize = *tr;
    std::vector<int> freqVec(tSize + 1, 0);

    int sErase = vec.size() - 1;

    for (int i = 0; i < vec.size(); i++)
    {
        freqVec.at(vec[i])++;
    }

    for (int i = 0; i < vec.size(); i++)
    {

        if (freqVec[vec[i]] > 1)
        {
            freqVec[vec[i]]--;
            vec.erase(vec.begin() + i);
        }
    }
}