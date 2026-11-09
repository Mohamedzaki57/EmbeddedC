#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>
#include <numeric>
void printVector(std::vector<int> v, std::string s)
{
  for (int i : v)
  {
    std::cout << i << " ";
  }
  std::cout << s << "\n";
}

int main(void)
{

  std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::vector<int> v1{9, 8, 7, 6, 5, 4, 3, 2, 1};
  std::vector<int>::iterator it;

  it = std::unique(v.begin(), v.end());
  v.erase(it, v.end());
  printVector(v, "remove duplicates");
  v.swap(v1); // 4
  printVector(v, "swap");
  std::reverse(v.begin(), v.end());
  printVector(v, "reverse ");
  v.at(5)=9;
  v.at(3)=8;
printVector(v, "before sort ");
  std::sort(v.begin(), v.end());
  printVector(v, "after sort");
  v.push_back(6);
  v.push_back(9);
  v.push_back(10);
  std::ranges::sort(v);
  printVector(v, "after sort in range");

  
  std::cout << "search for element : ";

  it = std::find(v.begin(), v.end(), 5);
  
  std::cout << *it <<" "<<  *std::find(v.begin(), v.end(), 5)<< " \n";
  // std::search(v.begin(), v.end());

  std::cout << "the max element in the vector :";
  std::cout << *std::max_element(v.begin(), v.end());
  std::cout<<"\nthe min element in the vector ";
  it =std::min_element(v.begin(),v.end());
  std::cout<<*it<<"\n";
  // std: islllllisll:"<<max <<"\n";
  // std: //lllll//ll int ment(v.begin(),v.end());
  // std: islllllisll:"<<min<<"\n";

  std::cout <<"the sum of element  ";
  std::cout<<std::accumulate(v.begin(), v.end(),0);
  // std::cout<<"\nthe sum is:"<<sum <<"\n";
  int freq = 0;
  std::cout << " \nfrequancy ";
  std::cout<<std::count(v.begin(), v.end(), 6);
  std::cout<<"  "<<std::ranges::count(v,9);

  int x{6};
  //    int arr[v.size()]= v.data();
}
// void missingElement(int *arr, int n);

// void getTheTwo(int *arr, int n, int x);
// int main()
// {

//     // std::vector<int>

//     int n = 9;
//     int arr[] = {3, 4, 5, 6, 7, 1, 2, 0, 8};

//     getTheTwo(arr, 9, 8);

//     // for (int i=0; i<12 ;i++)
//     //   std:: cout << fr[i]<<" ";

//     // missingElement(arr,n);
// }


// void getTheTwo(int *arr, int n, int x)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (x == arr[i] + arr[j])
//             {
//                 std::cout << arr[i] << " " << arr[j] << "\n";
//             }
//         }
//     }
// }

// 
// void missingElement(int *arr, int n)
// {
//     int diff = arr[0] - arr[1];
//     int flag = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; i++)
//         {
//             if (arr[i] != arr[j] - diff)
//             {
//                 flag++;
//             }
//         }
//         if (flag == 0)
//         {
//             std::cout << arr[i] + diff << "\n";
//         }
//     }
// }
// void missingElement(int *arr,int n)
// {
//      int fr[12]={0};

//      for ()

//     //  int f =0;

//     // for (int i=0 ;i<n;i++)
//     // {

//     //     for (int j=0; j<n ;j++)
//     //     {

//     //         if (arr[i]==arr[j]-1)
//     //           {
//     //             f++;
//     //           }
//     //     }

//     //     if (f==0)
//     //       {
//     //         std::cout<<arr[i]+1 <<"\n";
//     //       }
//     //     // if(arr[i]!=arr[i+1]-1)
//     //     // {
//     //     //    return arr[i]+1;
//     //     // }
//     //     f=0;

//     }
// }