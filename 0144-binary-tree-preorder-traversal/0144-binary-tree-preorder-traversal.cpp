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
    void preorder(TreeNode* root, vector<int> &num){
        if(root == NULL) return;
        num.push_back(root -> val);
        preorder(root -> left, num);
        preorder(root -> right,num);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> num;
        preorder(root , num);
        return num;
    }
};