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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leafSequence1, leafSequence2;
        getLeafSequence(root1, leafSequence1);
        getLeafSequence(root2, leafSequence2);

        return leafSequence1 == leafSequence2;
    }

private:
    void getLeafSequence(TreeNode* root, vector<int>& leafSequence) {
        if (!root) {
            return;
        }

        if (!root->left && !root->right) {
            leafSequence.push_back(root->val);
            return;
        }

        getLeafSequence(root->left, leafSequence);
        getLeafSequence(root->right, leafSequence);
    }
};