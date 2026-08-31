class Solution {
public:
    int solve(TreeNode* root, int maxi) {
        if (root == NULL)
            return 0;

        if (root->val > maxi) {
            maxi = root->val;

            return 1 + solve(root->left, maxi)
                     + solve(root->right, maxi);
        }

        return solve(root->left, maxi)
             + solve(root->right, maxi);
    }

    int goodNodes(TreeNode* root) {
        return solve(root, INT_MIN);
    }
};