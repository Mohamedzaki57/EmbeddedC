
#include <iostream>
#include <vector>
#include <algorithm>





int subArrSameK(std::vector<int> vec, int k);

int main(void)
{

    std::vector<int> v{1, 1, 1, 1, 1, 1};
    std::cout << subArrSameK(v, 2);

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
