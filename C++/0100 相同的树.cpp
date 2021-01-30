给定两个二叉树，编写一个函数来检验它们是否相同。

如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
示例 1:

输入:       1         1
          / \       / \
         2   3     2   3

        [1,2,3],   [1,2,3]

输出: true

/*递归
时间复杂度：O(不大于较小子树的节点数)
空间复杂度：O(不大于较小子树的高度)
*/
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr) {return true;}
        else if(p == nullptr || q == nullptr) {return false;}
        else if(p->val != q->val) {return false;}
        else{return isSameTree(p->left, q->left) && isSameTree(p->right,q->right);}

    }
};
