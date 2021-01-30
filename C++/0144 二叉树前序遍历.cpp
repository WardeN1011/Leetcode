/*迭代


*/
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> res;
        stack <TreeNode*> stk;
        while(root != nullptr || !stk.empty()){
            while(root != nullptr){
                res.emplace_back(root->val);
                stk.push(root);
                root = root->left;   
            }
            root = stk.top();
            stk.pop();
            root = root->right;
        }
        return res;
    }
};

/*递归


*/

class Solution {
public:
    void preorder(TreeNode *root, vector<int> &res) {
        if (root == nullptr) {
            return;
        }
        res.push_back(root->val);
        preorder(root->left, res);
        preorder(root->right, res);
    }

    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> res;
        preorder(root, res);
        return res;
    }
};
