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
    int heightMax(TreeNode* root, int &m){
        if(root == NULL)
            return 0;
        int leftHeight = heightMax(root->left,m);
        int rightHeight = heightMax(root->right, m);
        m = max(leftHeight + rightHeight, m);
        return 1 + max(leftHeight, rightHeight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int m = 0;
        heightMax(root, m);
        cout << m;
        return m; 
    }
    void print(TreeNode *r){
        if( r == NULL)
            return;
        cout << r->val << ", ";
        print(r->left);
        print(r->right);
    }
};
