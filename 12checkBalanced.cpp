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
