// to check if tree is like mirror
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void rotate(TreeNode *root){
        if (!root)
            return 
        TreeNode *temp = root->right;
        root->right= root->left;
        root->left=temp;
        rotate(root->left);
        rotate(root->right);
    }

    bool isSymmetric(TreeNode* root) {
        
        T
    }
};
