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
vector<int>res;
    vector<int> rightSideView(TreeNode* root) {
        recursion(root,0);
        return res;
    }
    void recursion(TreeNode* node, int level){
        if(node == NULL){
            return;
        }
        if(res.size()==level) res.push_back(node->val);
        recursion(node->right,level+1);
        recursion(node->left,level+1);
    }
};
