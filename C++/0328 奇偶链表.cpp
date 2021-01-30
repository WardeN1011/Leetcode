/*给定一个单链表，把所有的奇数节点和偶数节点分别排在一起。请注意，这里的奇数节点和偶数节点指的是节点编号的奇偶性，而不是节点的值的奇偶性。
示例 1:

输入: 1->2->3->4->5->NULL
输出: 1->3->5->2->4->NULL
*/

/*双指针
时间复杂度：O(N)
空间复杂度：O(1)
*/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr){
            return head;
        }
        ListNode* odd = head;
        ListNode* evenhead = head->next;
        ListNode* even = evenhead;
        while(even != nullptr && even->next != nullptr){
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;

        }
        odd->next = evenhead;
        return head;
    }
};
