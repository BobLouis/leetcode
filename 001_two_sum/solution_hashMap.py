class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        preMap = {}  # val:index
        for i, n in enumerate(nums):
            diff = target - n
            if(diff in preMap):
                return [preMap[diff], i]
            preMap[n] = i


s = Solution()
nums = [2, 7, 11, 15]
print(s.twoSum(nums, 9))


# hashMap = {}
# hashMap[3] = 5
# print(hashMap)
# print(5 in hashMap)
