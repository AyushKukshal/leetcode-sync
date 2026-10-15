class Solution {
public:
    vector<int> ans;

    void inorder(TreeNode* node) {
        if (node == nullptr) return;

        inorder(node->left);       // Traverse left
        ans.push_back(node->val);  // Store root
        inorder(node->right);      // Traverse right
    }

    vector<int> inorderTraversal(TreeNode* root) {
        ans.clear();
        inorder(root);
        return ans;
    }
};