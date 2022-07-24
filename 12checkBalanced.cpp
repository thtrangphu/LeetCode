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
/*
Cách khác 
class Solution {
public:
    int height(TreeNode* root) {
        if (!root)
            return 0;
        return 1 + max(height(root->left), height(root->right));
    }

    bool isBalanced(TreeNode* root) {
        if (!root) return 1;
        int l = height(root->left);
        int r = height(root->right);
        // Với mỗi node của cây phải kiểm tra nó cân bằng k 
        if(isBalanced(root->left) && isBalanced(root->right) && (abs(l - r) <= 1))
           return true;
        return false;     
    }
};

*/
class Solution {
public:
    // Kiểm tra chiều cao của mỗi nút xem có cân bằng hay k 
    int checkBalanced(TreeNode* root, bool &check) {
        if (root == NULL || check == false) return 0;

        int left = checkBalanced(root->left, check);
        int right = checkBalanced(root->right, check);

        if (abs(left - right) > 1) check = false;

        return 1 + max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        bool check = true;
        checkBalanced(root, check);

        return check;
    }
};
