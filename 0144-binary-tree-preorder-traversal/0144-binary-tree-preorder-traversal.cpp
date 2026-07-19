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
    void preorderfun(vector<int>& preorder,TreeNode* node){
        if(node == NULL) return;
        preorder.push_back(node-> val);
        preorderfun(preorder , node->left);
        preorderfun(preorder , node-> right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        TreeNode* node = root;
        preorderfun(preorder, node);
        return preorder;
    }
};