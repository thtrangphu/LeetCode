
class Solution {
public:
    bool check(TreeNode *r, TreeNode *s){
        if(r == NULL && s == NULL)
            return true;
        if(r == NULL || s == NULL || r->val != s->val)
            return false;
        // kiểm tra từng node tương ứng
        return check(r->right, s->right) && check(r->left, s->left);
    }
    bool isSubtree(TreeNode* r, TreeNode* s) {
        if(r == NULL) 
            return false;
        if(check(r, s)) // kiểm tra 2 cây có giống nhau k
            return true;
        
        return isSubtree(r->right, s) || isSubtree(r->left, s);
    }
};
