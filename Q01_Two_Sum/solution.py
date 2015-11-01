class Solution(object):
	def twoSum(self,nums,target):
		sorted_nums=sorted(nums)
		left=0
		right=len(nums)-1
		list_result=[]
		while(left<right):
			total=sorted_nums[left]+sorted_nums[right]
			if total==target:
				break
			elif total<target:
				left=left+1
			elif total>target:
				right=right-1
		if left==right:
			return [-1,-1]
		else:
			pos1=nums.index(sorted_nums[left])+1
			pos2=nums.index(sorted_nums[right])+1
			if pos1==pos2:
				pos2=nums[pos1:].index(sorted_nums[right])+pos1+1
			list_result.append(min(pos1,pos2))
			list_result.append(max(pos1,pos2))
			return list_result
