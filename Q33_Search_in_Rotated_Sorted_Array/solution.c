#include <stdio.h>
#include <stdlib.h>

int search(int* nums, int numsSize, int target);

int main(int argc,char *argv[])
{
	int target=0;
	int i,numsSize=6;
	int nums[]={4,5,6,7,0,1,2};
	printf("%d\n",search(nums,numsSize,target));
	exit(0);
}

int search(int* nums, int numsSize, int target)
{
	int left=0;
	int right=numsSize-1;
	while(left<right)
	{
		int mid=left+(right-left)/2;
		if(nums[mid]>=nums[left])
		{
			if(nums[left]<=target && target<=nums[mid])
				right=mid;
			else
				left=mid+1;
		}
		else
		{
			if(nums[mid]<=target && target<=nums[right])
				left=mid;
			else
				right=mid-1;
		}
	}
	if(right>=0 && right<numsSize && nums[right]==target)
		return right;
	else
		return -1;
}
