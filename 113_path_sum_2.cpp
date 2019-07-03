/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> ret;
    void Func(TreeNode* root, int tmpSum, int sum, vector<int> temp){
        if(root == NULL) return;
        if(root->right == NULL && root->left == NULL && tmpSum + root->val== sum){
            temp.push_back(root->val);
            ret.push_back(temp);
            return;
        }
        else{
            temp.push_back(root->val);
            Func(root->left, tmpSum + root->val, sum, temp);
            Func(root->right, tmpSum + root->val, sum, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> temp;
        if(root == NULL) return ret;
        Func(root, 0, sum, temp);
        return ret;
    }
};
