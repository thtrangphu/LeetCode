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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return check(root->left, root->right);
    }
    
    bool check(TreeNode *rl, TreeNode *rr){
        if((rl && !rr) || (!rl&&rr)) 
            return false;
        if(rl == rr) return true; // 1 node, 0 node
        bool cl = check(rl->left, rr->right);
        bool cr = check(rl->right, rr->left);
        return (rl->val == rr->val && cl && cr);
    }
};
