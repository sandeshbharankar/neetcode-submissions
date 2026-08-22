class Solution {
public:
    int dfs(TreeNode* root, int maxi) {
        if (root == NULL)
            return 0;

        int good = 0;

        if (root->val >= maxi)
            good = 1;

        maxi = max(maxi, root->val);

        return good + dfs(root->left, maxi)
                    + dfs(root->right, maxi);
    }

    int goodNodes(TreeNode* root) {
        return dfs(root, root->val);
    }
};