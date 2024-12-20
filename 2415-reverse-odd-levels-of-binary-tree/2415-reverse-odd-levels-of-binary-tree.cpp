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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;

        q.push(root);

        bool flag=false;
        while(!q.empty()){
            int n=(int)q.size();
            vector<TreeNode*> vec;

            for(int i=0;i<n;i++){
                if(q.front() == NULL){
                    q.pop();
                    continue;
                }

                vec.push_back(q.front());
                q.push(q.front()->left);
                q.push(q.front()->right);
                q.pop();
            }
            if(flag){
                int L = 0, R = (int)vec.size() - 1;
                while (L <= R) {
                    swap(v[L++]->val, v[R--]->val);  // Swap values
                }
            }
            flag=(!flag);
        }
        return root;
    }
};