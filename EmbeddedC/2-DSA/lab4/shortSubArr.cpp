#include <iostream>
#include <vector>
#include <algorithm>


int shortSubArray(std::vector<int> vec, int k);

int main(void)
{

    std::vector<int> v{10, 15, 7, 1, 7, 20, 1, 9, 10, 15};

    std::cout<<shortSubArray(v,21);

   
}

int shortSubArray(std::vector<int> vec, int k)
{
    int sum = 0;
    int count = 0;
    int minCount = vec.size();

    for (int i = 0; i < vec.size(); i++)
    {

        while (sum < k) 
        {
           int j=i;
            sum+=vec[j];
            
            if (count <= minCount)
            {
                count++;
                
            }
            j++;
        }
        minCount = count;
        count=0;
        sum=0;
    }

    return minCount;
}