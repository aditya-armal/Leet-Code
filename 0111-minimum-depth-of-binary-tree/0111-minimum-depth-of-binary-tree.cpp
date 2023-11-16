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
    int minDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }

        std::queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        int depth = 1;

        while (!nodesQueue.empty()) {
            int levelSize = nodesQueue.size();

            for (int i = 0; i < levelSize; ++i) {
                TreeNode* currentNode = nodesQueue.front();
                nodesQueue.pop();
                if (!currentNode->left && !currentNode->right) {
                    return depth;
                }
                if (currentNode->left) {
                    nodesQueue.push(currentNode->left);
                }
                if (currentNode->right) {
                    nodesQueue.push(currentNode->right);
                }
            }

            ++depth;
        }

        return depth;
    }
};