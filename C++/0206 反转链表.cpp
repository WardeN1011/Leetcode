/*双指针
时间复杂度：O(N)
空间复杂度：O(1)
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = NULL, *pre = head;
        while(pre != NULL){
            ListNode* temp = pre->next;
            pre->next = cur;
            cur = pre;
            pre = temp;

        }
    return cur;
    }
};
