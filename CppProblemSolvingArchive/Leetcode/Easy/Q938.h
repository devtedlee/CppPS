#pragma once

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 938. Range Sum of BST
    /// https://leetcode.com/problems/range-sum-of-bst/
    /// </summary>
    class Q938
    {
    public:
        struct TreeNode {
            int val;
            TreeNode* left;
            TreeNode* right;
            TreeNode() : val(0), left(nullptr), right(nullptr) {}
            TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
            TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
        };
        int rangeSumBST(TreeNode* root, int low, int high) {
            int sum = 0;
            if (root->val >= low && root->val <= high)
                sum = root->val;

            if (root->left != nullptr)
                sum += rangeSumBST(root->left, low, high);

            if (root->right != nullptr)
                sum += rangeSumBST(root->right, low, high);

            return sum;
        }
    };
}