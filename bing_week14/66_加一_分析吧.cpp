# include<stdio.h>
# include<stdlib.h>
/*
�ķǸ��������ڸ����Ļ����ϼ�һ��

���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢һ�����֡�

����Լ���������� 0 ֮�⣬��������������㿪ͷ
*/
// �϶�Ҫ���ǽ�λ������
/*
1. 123 -> 124  û�в�����λ 
2. 199 -> 200  ���ֲ����˽�λ 
3. 99  -> 100  ���ֲ����˽�λ������Ҫ��������ĳ���
*/ 
int plusone(int *digits, int digitsSize, int* returnSize)
{
	int i;
	int *result = (int*)malloc((digitsSize + 1)*siezeof(int));//���䷵��+1�������ռ�
	for (i = 0; i < digitsSize; i++)
	{
		// �ж��Ƿ���Ҫ��λ 
 
		if (digits[i] != 9)
			break;
	}
	
	//  ÿλ������9ʱ�� i == digitsSize // ��������� 
	if (i == digitsSize)  // ��Ҫ���󷵻�����ĳ��� 
	{
		*returnSize = digitsSize + 1; // ���󳤶� 
		result[0] = 1; // ��������� 99 
		for (int i = 1; i<digitsSize + 1; i++)
			result[i] = 0;
		return result;
	}
	i = digitsSize - 1;//�����ڶ�λ �ڶ������ 
	result[i] = digits[i] + 1;
	for (i; i > 0; i--)
	{
		if (result[i] == 10)// ���ڶ�λԭֵΪ9+1 = 10 
		{
			result[i] = 0; 
			result[i - 1] = digits[i - 1] + 1; // ��λ+1 	
		} 
		else
			result[i - 1] = digits[i - 1]; // ����123�����  
	}  
	*returnSize = digitsSize;
	return result;

} 







