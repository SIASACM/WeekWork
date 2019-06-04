//  ����һ�������ж��������Ƿ��л���
/* 
Ϊ�˱�ʾ���������еĻ���
����ʹ������pos����ʾ����β���ӵ������е�λ�ã�������0��ʼ����
��� pos �� -1�����ڸ�������û�л���
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
// ���⣺
// ˫ָ�뷨������һ����ָ�룬һ����ָ�롣
// �����ָ���ܹ�׷����ָ�룬��֤���л��������޻���
bool hasCycle(struct ListNode *head)
{
	if ((head == NULL) || (head->next == NULL)) // ���������ڵ���ܳɻ� 
		return false;
	
	struct ListNode *fast = head, *slow= head; // �������ָ��
	
	while (fast && fast->next)
	{
		fast = fast->next->next;//ÿ���ƶ�����
		slow = slow->next;
		if (fast == slow)//׷���˼������֤���л� 
			return true; 
	} 
	return false;
}
