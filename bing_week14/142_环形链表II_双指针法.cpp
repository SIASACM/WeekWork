// 题目要求：
/*
给定一个链表，返回链表开始入环的第一个节点.如果链表无环，则返回 null。

为了表示给定链表中的环，
我们使用整数pos来表示链表尾连接到链表中的位置（索引从 0 开始）。
如果 pos 是 -1，则在该链表中没有环。


说明：不允许修改给定的链表。
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 // 解题
 // 双指针法 和141道理类似 
 // 并且关键在于 快慢指针相遇点到环入口的距离 = 链表起始点到环入口的距离
 // 可以画图推导出来..... 
struct ListNode *detectCycle(struct ListNode *head)
{
    if (head==NULL||head->next == NULL)//同141 
        return false;
    struct ListNode *slow=head, *fast=head;
    while (fast&&fast->next)
    {
        fast = fast->next->next; 
        slow = slow->next;
        if(fast == slow)//有环 
        {
            struct ListNode *p = head; // 保存入环的第一个节点 
            while (p != slow) // 当p不是slow 时，他们俩的距离便是起始点到环入口的距离 
            {
                p = p->next;  
                slow = slow->next;
            }
            // 入环的第一个节点 
            return p;
        }
    }
    return false;
    
}

