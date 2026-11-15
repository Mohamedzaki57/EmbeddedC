

#include <algorithm>
#include <deque>
#include <iostream>
#include <stack>
#include <vector>
class MyCircularQueue
{

private:
    int *arr;
    int front;
    int rear;
    int capcity;
    int size;

public:
    MyCircularQueue(int k) : front{-1}, rear{-1}, capcity{k}, size{0}
    {
        arr = new int[capcity];
    }

    bool enQueue(int value)
    {

        if (isFull())
            return false;

        if (isEmpty())
        {
            rear += 1 % capcity;
            front = (front + 1) % capcity;
            arr[front] = value;
            size++;
            return true;
        }
        else
        {

            rear = (rear + 1) % capcity;
            arr[rear] = value;
            size++;
            return true;
        }
    }

    bool deQueue()
    {
        if (isEmpty())
            return false;

        if (size == 1)
        {
            front = -1;

            size--;
            return true;
        }
        else
        {

            front = (front + 1) % capcity;
            size--;
            return true;
        }
    }

    int Front()
    {

        return front;
    }

    int Rear()
    {

        return rear + 1;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    bool isFull()
    {

        return size == capcity;
    }
};

std::vector<int> productExceptSelf(std::vector<int> &nums);
int maxArea(std::vector<int> &height);
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
ListNode *removeNthFromEnd(ListNode *head, int n);
ListNode *detectCycle(ListNode *head);
std::vector<int> maxSlidingWindow(std::vector<int> &nums, int k);
int main()
{
    std::stack<int> s;

    // std::vector<int> vec = {1,3,1,2,0,5};

    // std::vector<int> v2 = maxSlidingWindow(vec, 3);

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     std::cout << v2[i] << " ";
    // }
    // std::cout << "\n";

    int ar[] = {3, 5, 1, 6, 2, 0, 8, -1, -1, 7, 4};
}
int firstMissingPositive(std::vector<int> &nums){


    std::vector<int> v(nums.size(),0);

     for(int i=0;i<nums.size();i++)
     {


     }
// std::sort(v.begin(),v.end());

//     for(int i=0;i<v.size();i++)
//     {
//         if (v[i]<0) break;

//         if(v[i]!=v[i] && v[i]==v[i]+1) return v[i];
//     }



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
/*    while (r < l)
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
                }*/

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
