 /*将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 

 

示例 1：


输入：l1 = [1,2,4], l2 = [1,3,4]
输出：[1,1,2,3,4,4]
*/

/*递归
时间复杂度：O(N+M)
空间复杂度：O(N+M)
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr){
            return l2;
        }
        else if(l2 == nullptr){
            return l1;
        }
        else if (l1->val < l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;}


        else{
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }



    }
};

/*迭代
时间复杂度：O(M+N)
空间复杂度：O(1)
*/
