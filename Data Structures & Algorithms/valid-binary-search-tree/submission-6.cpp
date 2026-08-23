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
bool isvalidtree(TreeNode* root, long long min_val, long long max_val){
    if( root==NULL){
        return true;
    }
    if( root->val <= min_val || root->val >= max_val){
        return false;
    }

    return isvalidtree( root->left, min_val, root->val)&& isvalidtree(root->right, root->val, max_val);

}



    bool isValidBST(TreeNode* root) {
        bool ans=isvalidtree(root, LLONG_MIN ,LLONG_MAX);
        return ans;

       
        
    }
};
