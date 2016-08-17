    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;
        auto cur = root;
        stack<TreeNode *> s;
        while (cur || !s.empty()) {
            if (cur) {
                s.push(cur);
                cur = cur->left;
            } else {
                cur = s.top();
                s.pop();
                ret.push_back(cur->val);
                cur = cur->right;
            }
        }
        return ret;
    }
