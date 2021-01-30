/*
给定一个链表，两两交换其中相邻的节点，并返回交换后的链表。

你不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换。

 

示例 1：


输入：head = [1,2,3,4]
输出：[2,1,4,3]
*/

/*双指针
时间复杂度：O(N)
空间复杂度：O(1)
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyhead = new ListNode(0);//定义哑结点
        dummyhead->next = head;
        ListNode* cur =dummyhead;               //定义指针
        while(cur->next != nullptr && cur->next->next !=nullptr){
            ListNode* temp1 = cur->next;                //设置临时变量
            ListNode* temp2 = cur->next->next->next;
            cur->next = cur->next->next;                //进行重新排序
            cur->next->next = temp1;
            cur->next->next->next = temp2;
            cur = cur->next->next;                      //将指针前进两位 准备进行下一次交换
        }
        return dummyhead->next;
    }
};
