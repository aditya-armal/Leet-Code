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
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }

        // Check the balance condition for the current node
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);

        if (abs(leftHeight - rightHeight) > 1) {
            return false;
        }

        // Recursively check the balance for left and right subtrees
        return isBalanced(root->left) && isBalanced(root->right);
    }

private:
    int getHeight(TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }

        // Recursively calculate the height of the left and right subtrees
        int leftHeight = getHeight(node->left);
        int rightHeight = getHeight(node->right);

        // Return the height of the current node
        return 1 + max(leftHeight, rightHeight);
    }
};