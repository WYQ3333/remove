
//����һ������ nums ��һ��ֵ val������Ҫԭ���Ƴ�������ֵ���� val ��Ԫ�أ������Ƴ���������³��ȡ�
//��Ҫʹ�ö��������ռ䣬�������ԭ���޸��������鲢��ʹ�� O(1) ����ռ����������ɡ�
//Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
//ʾ�� 1:
//���� nums = [3, 2, 2, 3], val = 3,

//����Ӧ�÷����µĳ��� 2, ���� nums �е�ǰ����Ԫ�ؾ�Ϊ 2��

//�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�

//ʾ�� 2:
//���� nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2,

//����Ӧ�÷����µĳ��� 5, ���� nums �е�ǰ���Ԫ��Ϊ 0, 1, 3, 0, 4��

//ע�������Ԫ�ؿ�Ϊ����˳��

//�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�

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
//����˼·��
//���� nums[0...i] Ϊ�� val �����У������������в��ϵ�ά���������