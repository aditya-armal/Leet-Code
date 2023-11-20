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
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int diameter = 0;
        calculateHeightAndDiameter(root, diameter);
        return diameter;
    }

private:
    int calculateHeightAndDiameter(TreeNode* node, int& diameter) {
        if (node == nullptr) {
            return 0;
        }
        int leftHeight = calculateHeightAndDiameter(node->left, diameter);
        int rightHeight = calculateHeightAndDiameter(node->right, diameter);
        diameter = std::max(diameter, leftHeight + rightHeight);
        return 1 + std::max(leftHeight, rightHeight);
    }
};