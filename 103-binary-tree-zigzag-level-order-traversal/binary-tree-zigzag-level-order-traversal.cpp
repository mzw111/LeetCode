/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (root == nullptr)
            return {};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        bool rtl = 1;
        while (!q.empty()) {
            int size = q.size();
            vector<int> temp(size);
            int left = 0;
            int right = temp.size() - 1;
            while (size--) {
                TreeNode* t = q.front();
                q.pop();
                if (rtl == 1) {
                    temp[left] = t->val;
                    left++;
                } else {
                    temp[right] = t->val;
                    right--;
                }
                if (t->left != nullptr) {
                    q.push(t->left);
                }
                if (t->right != nullptr) {
                    q.push(t->right);
                }
            }
            res.push_back(temp);
            rtl = 1 - rtl;
        }
        return res;
    }
};