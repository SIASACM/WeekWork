// 没有什么值得说的遍历循环,找下标. 
int searchInsert(int* nums, int numsSize, int target)
{
	for (int i = 0; i<numsSize; i++)
	{
		if(*(nums + i) >= target)
		{
			return i;
		}
	}
	return numsSize;
}
