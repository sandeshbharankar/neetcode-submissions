class Solution {
public:
    int goodNodes(TreeNode* root) {

        function<int(TreeNode*, int)> dfs =
        [&](TreeNode* node, int maxi) {

            if (node == NULL)
                return 0;

            int ans = 0;

            if (node->val >= maxi)
                ans = 1;

            int newMax = max(maxi, node->val);

            ans += dfs(node->left, newMax);
            ans += dfs(node->right, newMax);

            return ans;
        };

        return dfs(root, INT_MIN);
    }
};