#include<stdio.h>
/**将两个有序链表合并为一个新的有序链表并返回。
新链表是通过拼接给定的两个链表的所有节点组成的。
**/
/*
1. l1或(l2) 等于空，返回l2或(l1)；
2.  两者同时为空无意义了 
3. 注意是有序链表 
*/ 
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    if(l1 == NULL)
        return l2;
    if(l2 == NULL)
        return l1;
    if(l1->val < l2->val)
    {
    	// l1 的数据域小于l2 的数据域，就是节点大小比较 
    	
    	// 递归调用l1的指针域存放的是下一个节点的值和当前l2的val 进行比较然后赋给l1->next， 
        l1->next = mergeTowLists(l1->next, l2);  
        return l1;// 再返回 
    }
    else // 原理同上 
    {
        l2->next = mergeTowLists(l1, l2->next);
        return l2;
    }
}
