# include<stdio.h>
# include<stdlib.h>
/*
的非负整数，在该数的基础上加一。

最高位数字存放在数组的首位， 数组中每个元素只存储一个数字。

你可以假设除了整数 0 之外，这个整数不会以零开头
*/
// 肯定要考虑进位的问题
/*
1. 123 -> 124  没有产生进位 
2. 199 -> 200  这种产生了进位 
3. 99  -> 100  这种产生了进位并且需要扩大数组的长度
*/ 
int plusone(int *digits, int digitsSize, int* returnSize)
{
	int i;
	int *result = (int*)malloc((digitsSize + 1)*siezeof(int));//分配返回+1后的数组空间
	for (i = 0; i < digitsSize; i++)
	{
		// 判断是否需要进位 
 
		if (digits[i] != 9)
			break;
	}
	
	//  每位都等于9时， i == digitsSize // 第三种情况 
	if (i == digitsSize)  // 需要扩大返回数组的长度 
	{
		*returnSize = digitsSize + 1; // 扩大长度 
		result[0] = 1; // 第三种情况 99 
		for (int i = 1; i<digitsSize + 1; i++)
			result[i] = 0;
		return result;
	}
	i = digitsSize - 1;//倒数第二位 第二种情况 
	result[i] = digits[i] + 1;
	for (i; i > 0; i--)
	{
		if (result[i] == 10)// 倒第二位原值为9+1 = 10 
		{
			result[i] = 0; 
			result[i - 1] = digits[i - 1] + 1; // 进位+1 	
		} 
		else
			result[i - 1] = digits[i - 1]; // 例如123的情况  
	}  
	*returnSize = digitsSize;
	return result;

} 







