/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!root) return 0;
        if(!root->left && !root->right) return 1;
        if(!root->left && root->right) return 1+minDepth(root->right);
        if(root->left && !root->right) return 1+minDepth(root->left);
        return min(minDepth(root->left),minDepth(root->right))+1;
    }
};