class Solution {
public:
    int dfs(TreeNode* root, int maxi) {
        if (root == NULL)
            return 0;

        int ans = (root->val >= maxi);

        int newMax = max(maxi, root->val);

        ans += dfs(root->left, newMax);
        ans += dfs(root->right, newMax);

        return ans;
    }

    int goodNodes(TreeNode* root) {
        return dfs(root, root->val);
    }
};