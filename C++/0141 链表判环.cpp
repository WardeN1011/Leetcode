/*快慢针
时间复杂度：O(N)
空间复杂度：O(1)


class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr){       //链表判空
            return false;
        }
        ListNode* slow = head;                              //快慢指针声明
        ListNode* fast = head->next;
        while(slow != fast){                                //若存在环形链表 则快慢指针可以相遇
            if(fast == nullptr || fast->next == nullptr){
            return false;}
            slow = slow->next;
            fast = fast->next->next;

        }
        return true;
    }
};
