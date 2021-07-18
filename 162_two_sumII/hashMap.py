class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        preMap = {}  # val:index
        for i, n in enumerate(nums):
            diff = target - n
            if(diff in preMap):
                return [preMap[diff]+1, i+1]
            preMap[n] = i
