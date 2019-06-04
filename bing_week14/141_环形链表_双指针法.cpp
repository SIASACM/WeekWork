//  给定一个链表，判断链表中是否有环。
/* 
为了表示给定链表中的环，
我们使用整数pos来表示链表尾连接到链表中的位置（索引从0开始）。
如果 pos 是 -1，则在该链表中没有环。
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
// 解题：
// 双指针法，设置一个快指针，一个慢指针。
// 如果快指针能够追上慢指针，则证明有环，否则无环。
bool hasCycle(struct ListNode *head)
{
	if ((head == NULL) || (head->next == NULL)) // 至少三个节点才能成环 
		return false;
	
	struct ListNode *fast = head, *slow= head; // 定义快慢指针
	
	while (fast && fast->next)
	{
		fast = fast->next->next;//每次移动两步
		slow = slow->next;
		if (fast == slow)//追上了即相等则证明有环 
			return true; 
	} 
	return false;
}
