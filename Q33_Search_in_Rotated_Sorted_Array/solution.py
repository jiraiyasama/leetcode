class Solution(object):
	def search(self,nums,target):
		sorted_nums=sorted(nums)
		if target in sorted_nums:
			return nums.index(target)
		else:
			return -1
