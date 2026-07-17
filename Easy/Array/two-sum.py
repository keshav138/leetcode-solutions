// Two Sum
// Difficulty: Easy  |  Topic: Array
// https://leetcode.com/problems/two-sum/

class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        
        self.nums  = nums
        self.target = target
        rtype = []
        for i in range(len(self.nums)):
            for j in range(i+1,len(self.nums)):
                if self.nums[i]+self.nums[j]==self.target:
                    rtype.append(i)
                    rtype.append(j)
                    break
        return(rtype)