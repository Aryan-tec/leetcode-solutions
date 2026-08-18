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
    vector<vector<int>> levelOrder(TreeNode* root) {
        TreeNode* node =root;
        vector<vector<int>> ans;
        if(node == NULL ) return ans;
        queue<TreeNode* > q;
        q.push(node);
        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            for(int i=0 ; i<size; i++){
                TreeNode* s= q.front();
                q.pop();
                if(s->left != NULL) q.push(s->left);
                if(s->right != NULL) q.push(s->right);
                level.push_back(s->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};