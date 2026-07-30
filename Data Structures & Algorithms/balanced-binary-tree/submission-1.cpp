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
bool isbalanced= true;
    bool isBalanced(TreeNode* root) {
        height(root);
        return isbalanced;
       
    }
    int height(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        if(left-right >1 || right-left >1){
            isbalanced = false;
            return -1;

        }

        return 1+ max(left ,right); 
    }
};
