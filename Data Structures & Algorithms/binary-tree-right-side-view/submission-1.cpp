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
vector<int> res;

    vector<int> rightSideView(TreeNode* root) {
       
       if(root==nullptr){
        return res;
        
       }
       queue<TreeNode*> q;
       q.push(root);

       while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            TreeNode* n= q.front();
            q.pop();
            level.push_back(n->val);
            if(n->left){
                q.push(n->left);
            }
            if(n->right){
                q.push(n->right);
            }
        }
        res.push_back(level[size-1]);
       }

       return res;
        
    }
};
