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
priority_queue<int>max_heap;
vector<int> array;
void array_form(TreeNode* root){
    if( root==NULL){
        return ;
    }
    array.push_back(root->val);

    array_form(root->left);
    array_form(root->right);


}
    int kthSmallest(TreeNode* root, int k) {
        array_form(root);
       for(int i: array){
        max_heap.push(i);
        if(max_heap.size()> k){
           max_heap.pop();
        }
       }
       return max_heap.top();
        
    }
};
