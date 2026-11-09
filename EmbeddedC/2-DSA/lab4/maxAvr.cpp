#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

int maxAvr(std::vector<int> vec , int k);
int main(void)
{

    std::vector<int> v{10,20,30,4,5,6,7};
    std::cout << maxAvr(v, 2);

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