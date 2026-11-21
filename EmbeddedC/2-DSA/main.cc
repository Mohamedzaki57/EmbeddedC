

#include <algorithm>
#include <deque>
#include <iostream>
#include <stack>
#include <vector>
#include<unordered_set>
#include<set>
#include<map>
#include<unordered_map>
bool uniqueOccurrences(std::vector<int>& arr);
int main()
{

    std::vector<int> ar {1,2,2,1,1,3};

    std::cout<<uniqueOccurrences(ar);

    std::multimap<int,int> map;
}

    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {


        std::multimap<int, int> map;
        int i = 0;

        for (int num : nums) {
            if (auto old = map.find(num); old != map.end()) {


                if (k >= i - (old->second))
                    return true;

                old->second=i;
            }
            map.insert({num, i});
            i++;
        }


            return false;
    }
 bool containsDuplicate(std::vector<int>& nums) {

    std::map<int,int> map;

    for(int num:nums)
    {
        map[num]++;
        if(map[num]>1)return true;
    }

    for (auto it = map.begin(); it!=map.end();it++)
    {
        if(it->second>1) return true;
    }

    return false;
    }
    bool uniqueOccurrences(std::vector<int>& arr) {

        std::map<int,int> map;
        std::multiset<int> set;

        for(int num:arr)
        {
            map[num]++;
        }

        for (auto it =map.begin();it!=map.end();++it)
        {
            set.insert(it->second);
        }

        for(auto it=set.begin();it!=set.end();it++)
        {
             auto next = std::next(it);
             if(next==set.end())break;
            if(*it == *next) return false;
        }

        return true;


    }

   std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {

    }
  bool isAnagram(std::string s, std::string t) {

    std::multiset<char> setS(s.begin(),s.end());
    std::multiset<char> setT(t.begin(),t.end());

    return setS==setT;

    }
    std::vector<int> twoSum(std::vector<int>& nums, int target) {   /// it's true thank you zaki ;d

        std::vector<int> vec;

        std::unordered_map <int,int> mp;
         int i=0;
        for(int num:nums)
        {
            mp[num]=i;
            i++;
        }

       for (int i=0 ; i<nums.size(); i++)
       {
        if(auto s =mp.find(9-nums[i]) ; s!=mp.end() && s->second != i)
        {
            vec.push_back(i);
            vec.push_back(s->second);
            return vec;

        }
       }

       return vec;
    }






/*


/*
int firstMissingPositive(std::vector<int> &nums){

    int size=*std::max_element(nums.begin(),nums.end()) ;

    std::vector<int> v(nums);

     for(int i=0;i<nums.size();i++)
     {




     }



} TreeNode *parant(TreeNode *p, TreeNode *q)
{
    if (!p)
        return nullptr;
    if (p == q)
        return p;
    else if (parant(p->left, q))
        return parant(p->left, q);
    else if (parant(p->right, q))
        return parant(p->left, q);
    else
        return nullptr;
}
TreeNode *parant2(TreeNode *(&p), TreeNode *q)
{
    if (!p)
        return nullptr;
    if (p == q)
        return p;
    else if (parant((p->left), q))
        return parant(p->left, q);
    else if (parant((p->right), q))
        return parant(p->left, q);
    else
        return nullptr;
}
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
TreeNode *buildTree(std::vector<int> &preorder, std::vector<int> &inorder)
{
    int i = 0;
    int j = 0;
    while (preorder[i] != inorder[j] && j < inorder.size())
    {
        j++;
    }
    i = j;
    int numleft = j;
    int numr = inorder.size() - j - 1;
    if (inorder.size() > 1)
        TreeNode tr = TreeNode(inorder[j]);
}
TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (!root || root == q || root == p)
        return root;

    root->left = lowestCommonAncestor(root->left, p, q);
    root->right = lowestCommonAncestor(root->right, p, q);

    if (root->left)
        return root->left;
    else
        return root->right;
}
std::vector<int> maxSlidingWindow(std::vector<int> &nums, int k)
{

    std::vector<int> vec(nums.size() - k + 1);
    int max = nums[0];

    for (int j = 0; j < k && j < nums.size(); j++)
    {
        if (nums[j] > max)
        {
            max = nums[j];
        }
    }
    vec[0] = max;
    if (max == nums[0] && nums.size() > 1)
    {
        max = nums[1];
    }
    for (int i = 1; i < nums.size() - k + 1; i++)
    {
        if (nums[k + i - 1] > max)
        {
            max = nums[k + i - 1];
            vec[i] = max;
        }
        else
        {

            if (max == nums[i - 1] && k > 1)
            {
                max = nums[i];

                for (int j = i; j < k + i && j < nums.size(); j++)
                {
                    if (nums[j] > max)
                    {
                        max = nums[j];
                    }
                }
            }
            vec[i] = max;
        }
    }
    return vec;
}
    while (r < l)
                {
                    if (nums[r] > nums[l] && nums[r] > max)
                    {
                        max = nums[r];
                        r++;
                    }
                    else if (nums[r] < nums[l] && nums[l] > max)
                    {
                        max = nums[l];
                        l--;
                    }
                    else
                    {
                        r++;
                        l--;
                    }
                }
ListNode *detectCycle(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
        return nullptr;

    ListNode *slow = head;
    ListNode *fast = head->next;

    while (slow && fast->next)
    {

        for (int i = 0; i < 5; i++)
        {

            if (fast == slow)
            {
                return slow;
            }
            fast = fast->next;
        }

        slow = slow->next;
    }
    return nullptr;
}
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *temp = head;
    ListNode *nextmp = head;
    ListNode *prevtmp = nullptr;

    while (nextmp)
    {
        nextmp = nextmp->next;
        temp->next = prevtmp;
        prevtmp = temp;
        temp = nextmp;
    }

    ListNode *todelte = prevtmp;

    for (int i = 0; i < n - 2; i++)
    {
        todelte = todelte->next;
    }
    if (prevtmp->next == nullptr)
    {
        delete prevtmp;
        return nullptr;
    }
    if (n == 1)
    {
        prevtmp = prevtmp->next;
        delete todelte;
    }

    else if (todelte->next)
    {
        todelte->next = todelte->next->next;
    }

    temp = prevtmp;
    nextmp = prevtmp;
    ListNode *pre = nullptr;
    while (nextmp)
    {
        nextmp = nextmp->next;
        temp->next = pre;
        pre = temp;
        temp = nextmp;
    }

    return pre;
}
*/

int maxArea(std::vector<int> &height)
{

    int i = 0;
    int j = height.size() - 1;
    int min = (height[i] < height[j]) ? height[i] : height[j];
    int diff = j - i;
    int area = diff * min;

    while (i < j)
    {
        min = (height[i] < height[j]) ? height[i] : height[j];
        diff = j - i;
        if ((diff * min) > area)
        {
            area = diff * min;
        }
        if (height[i] > height[j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return area;
}

std::vector<int> productExceptSelf(std::vector<int> &nums)
{ //

    int zFlag = 0;
    int multi = 1;
    int sFlag = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            zFlag += 1;
        }
        else
        {

            multi *= nums[i];
            sFlag = 1;
        }
    }

    std::vector<int> vec(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        if (zFlag == 0)
        {
            vec[i] = multi / nums[i];
        }
        else
        {

            if (nums[i] == 0)
            {
                if ((multi >= 1 && sFlag == 0) || (multi >= 1 && sFlag == 1 && zFlag > 1))
                {
                    vec[i] = 0;
                }

                else if (multi == 1 && sFlag == 1)
                {
                    vec[i] = 1;
                }
                else
                {
                    vec[i] = multi;
                }
            }

            else
            {
                vec[i] = 0;
            }
        }
    }
    return vec;
}
