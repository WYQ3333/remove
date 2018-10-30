
//给定一个数组 nums 和一个值 val，你需要原地移除所有数值等于 val 的元素，返回移除后数组的新长度。
//不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
//示例 1:
//给定 nums = [3, 2, 2, 3], val = 3,

//函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。

//你不需要考虑数组中超出新长度后面的元素。

//示例 2:
//给定 nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2,

//函数应该返回新的长度 5, 并且 nums 中的前五个元素为 0, 1, 3, 0, 4。

//注意这五个元素可为任意顺序。

//你不需要考虑数组中超出新长度后面的元素。

#include<stdio.h>
#include<Windows.h>

int removeElement(int* nums, int numsSize, int val) {
	int i = 0;
	int j = 0;
	int k = 0;
	int count = 0;
	if (numsSize == 0)
	{
		return 0;
	}
	while (k<numsSize)
	{
		while (i<numsSize&&nums[i] != val)
		{
			i++;
			count++;
		}
		j = i;
		while (j<numsSize&&nums[j] == val)
		{
			j++;
		}
		if (i >= numsSize || j >= numsSize)
		{
			return count;
		}
		if (j>i)
		{
			int tmp = nums[i];
			nums[i] = nums[j];
			nums[j] = tmp;
		}
		k++;
	}
}

int main()
{
	int nums[] = { 3,3 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int val = 5;
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");
	int len = removeElement(nums, numsSize, val);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", nums[i]);
	}
	system("pause");
	return 0;
}
//解题思路：
//定义 nums[0...i] 为非 val 的数列，遍历整个数列不断的维护这个定义