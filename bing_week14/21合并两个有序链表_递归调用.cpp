#include<stdio.h>
/**��������������ϲ�Ϊһ���µ������������ء�
��������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�
**/
/*
1. l1��(l2) ���ڿգ�����l2��(l1)��
2.  ����ͬʱΪ���������� 
3. ע������������ 
*/ 
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    if(l1 == NULL)
        return l2;
    if(l2 == NULL)
        return l1;
    if(l1->val < l2->val)
    {
    	// l1 ��������С��l2 �������򣬾��ǽڵ��С�Ƚ� 
    	
    	// �ݹ����l1��ָ�����ŵ�����һ���ڵ��ֵ�͵�ǰl2��val ���бȽ�Ȼ�󸳸�l1->next�� 
        l1->next = mergeTowLists(l1->next, l2);  
        return l1;// �ٷ��� 
    }
    else // ԭ��ͬ�� 
    {
        l2->next = mergeTowLists(l1, l2->next);
        return l2;
    }
}
