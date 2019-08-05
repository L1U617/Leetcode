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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> A;
        if(root == NULL){
            A.push_back(0);
            return A;
        }
        vector<TreeNode*> Q;
        int level = 0, thisLevel = 1, nextLevel = 0, cnt = 0;
        double aver;
        double sum = 0.0;
        TreeNode* temp;
        Q.push_back(root);
        while(Q.size() != 0){
            temp = Q[0];
            Q.erase(Q.begin());
            cnt++;
            sum += temp->val;
            if(temp->left != NULL){
                nextLevel++;
                Q.push_back(temp->left);
            }
            if(temp->right != NULL){
                nextLevel++;
                Q.push_back(temp->right);
            }
            if(cnt == thisLevel){
                aver = sum / cnt;
                A.push_back(aver);
                cnt = 0;
                sum = 0;
                thisLevel = nextLevel;
                nextLevel = 0;
            }            
        }
        return A;
    }
};
