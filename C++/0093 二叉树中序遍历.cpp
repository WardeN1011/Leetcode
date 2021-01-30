/* 递归
时间复杂度：O(N)
空间复杂度：O(N)
*/
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& res) {
        if (!root) {
            return;
        }
        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorder(root, res);
        return res;
    }
}

/*迭代
时间复杂度：O(N)
空间复杂度：O(N)
*/
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> res;
        stack <TreeNode*> stk;
        while(root != nullptr || !stk.empty()){
            while(root !=nullptr) {
                stk.push(root);
                root = root->left;
            }
            root = stk.top();
            stk.pop();
            res.emplace_back(root->val);
            root = root->right;

        }
        return res;


    }
}
