class Solution {
public:
    int goodNodes(TreeNode* root) {

        if (root == NULL)
            return 0;

        stack<pair<TreeNode*, int>> st;
        st.push({root, root->val});

        int count = 0;

        while (!st.empty()) {

            auto [node, maxi] = st.top();
            st.pop();

            if (node->val >= maxi)
                count++;

            int newMax = max(maxi, node->val);

            if (node->left)
                st.push({node->left, newMax});

            if (node->right)
                st.push({node->right, newMax});
        }

        return count;
    }
};