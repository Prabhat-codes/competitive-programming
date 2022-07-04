#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
TreeNode *ans;
TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
{
    if (original == nullptr)
        return nullptr;
    // Don't compare value. Compare the pointer
    if (original == target)
        return cloned;
    if (cloned->right->val == target->val)
    {
        ans = cloned->right;
    }
    else if (cloned->left->val == target->val)
    {
        ans = cloned->left;
    }
    else
    {
        getTargetCopy(original->right, cloned->right, target);
        getTargetCopy(original->left, cloned->left, target);
    }
    return ans;
}
int main()
{

    return 0;
}