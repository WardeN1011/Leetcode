/*给定一个二叉树，检查它是否是镜像对称的。

 

例如，二叉树 [1,2,2,3,4,4,3] 是对称的。

    1
   / \
  2   2
 / \ / \
3  4 4  3
*/

/*递归
时间复杂度：O(不大于子树节点数)
空间复杂度：O(不大于子树高度)
*/

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root  == nullptr) {
            return true;
        }
        else {
            return isSymmetric(root->left, root->right);
        }

    }
    bool isSymmetric(TreeNode* left,TreeNode* right) {
         if(left == nullptr && right == nullptr) {
             return true;
         }
         else if(left == nullptr || right == nullptr) {
             return false;

         }
         else if(left->val != right->val) {
             return false;

         }
         else {
             return isSymmetric(left->left,right->right) && isSymmetric(left->right, right->left);
         }

    }
};
