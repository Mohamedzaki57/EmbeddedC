#include<iostream>
#include<algorithm>
#include <vector>
#include <string>
#include <iterator>
#include <numeric>
#include<limits.h>
void getTwo (int *arr,int n,int x);
void printVector(std::vector<int> v, std::string s)
{
  for (int i : v)
  {
    std::cout << i << " ";
  }
  std::cout << s << "\n";
}
// void removedup(std::vector<int>& nums);
// int maxmum(std::vector<int> & nums ,int k);
// int jtag(std::vector<int> nums,int k);
// void vec_vecremoveduplicusort(std::vector<int> &vec);
 int maxProfit(std::vector<int>& prices);
int main(void){

//   std::vector<int> v{2,5,1,7,10};
  
// // std::cout<<maxmum(v,3);
//   int x=jtag(v,14);
//   std::cout<<x;

 std::vector<int> v{2,1,4};

 int x=maxProfit(v);
 std::cout<< x<<"\n";
    // vec_vecremoveduplicusort(v);
    // for(int i=0 ;i<v.size();i++)
    // {
    //     std::cout<<v[i]<<" ";
    // }
    // std::cout << std::endl;
}
 int maxProfit(std::vector<int>& prices)
  {
      
       int l=0;
       int r=prices.size()-1;
       
       int p=0;
        while(l<r)
        {
            
           if(prices[l]<prices[r]  )
           { 
            if(p < prices[r]-prices[l]){
             p=prices[r]-prices[l];
            }
              
              r--;
           }
           else if(prices[l]>=prices[r])
           {
            l++;
           }
        
        }
        return p;
    }


// int jtag(std::vector<int> arr,int k)
// {
//   int f=0;
//   int x =0;
//   int sum=0;
//   int j=1;
//  while(x<arr.size())
//  {
//   sum+=arr[x];
//      if(sum<=k)
//      {
       
//        x++;
//       f++;
//      }
//      if()
//      {
     
//       sum-=arr[j];
//       j++;
//       f--;
     
//      }
//   }
//   return f;
// }



// int maxmum(std::vector<int> & nums ,int k)
// {
//   int sums=0;
//   int maxsum=INT_MIN;
  
//    int i=0;
//     for(int j=i;j<k+i;j++)
//     {
//       sums+=nums[k+i]-nums[i];
      
//     }
//     maxsum=std::max(maxsum,sums);
 
 
//   return maxsum;
// }
// void removedup(std::vector<int>& nums)
// {
//   // int x=std::max_element(nums.begin(),nums.end());

//   std::vector<int> v;
  

//   for(int i=0 ;i<nums.size();i++) ///11 2 22 344
//   {  
       
//      if(nums[i]==nums[i++])
//      {
//       v.push_back(nums[i]);
       
//      }
//      else if(nums[i]!=nums[i++])
//     {
//       v.push_back(nums[i++]);
//     }
     
    
//   }
//   nums.swap(v);

//  for (int i : nums)
//   {
//     std::cout << i << " ";
//   }
 
  

// }
// void getTwo (int *arr,int n,int k)
// {
//   int freq [n]={0,0,0,0,0,0,0,0,0,0};


//   for(int i=0;i<n;i++)
//   {
//     if((freq[k-arr[i]]!=0 ) && (k-arr[i]>=0))
//     {
//       std::cout<< arr[i] <<" "<< k-arr[i] ;
//     }
//     else{
//       freq[i]++;
//     }
//   }
// }
