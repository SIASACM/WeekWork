// ��ĿҪ��
/*
����һ��������������ʼ�뻷�ĵ�һ���ڵ�.��������޻����򷵻� null��

Ϊ�˱�ʾ���������еĻ���
����ʹ������pos����ʾ����β���ӵ������е�λ�ã������� 0 ��ʼ����
��� pos �� -1�����ڸ�������û�л���


˵�����������޸ĸ���������
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 // ����
 // ˫ָ�뷨 ��141�������� 
 // ���ҹؼ����� ����ָ�������㵽����ڵľ��� = ������ʼ�㵽����ڵľ���
 // ���Ի�ͼ�Ƶ�����..... 
struct ListNode *detectCycle(struct ListNode *head)
{
    if (head==NULL||head->next == NULL)//ͬ141 
        return false;
    struct ListNode *slow=head, *fast=head;
    while (fast&&fast->next)
    {
        fast = fast->next->next; 
        slow = slow->next;
        if(fast == slow)//�л� 
        {
            struct ListNode *p = head; // �����뻷�ĵ�һ���ڵ� 
            while (p != slow) // ��p����slow ʱ���������ľ��������ʼ�㵽����ڵľ��� 
            {
                p = p->next;  
                slow = slow->next;
            }
            // �뻷�ĵ�һ���ڵ� 
            return p;
        }
    }
    return false;
    
}

