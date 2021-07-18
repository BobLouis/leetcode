class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        l = 0
        r = len(nums) - 1
        while l < r:
            if (nums[l]+nums[r]) < target:
                l += 1
            elif (nums[l]+nums[r]) > target:
                r -= 1
            else:
                return [l+1, r+1]


s = Solution()
print(s.twoSum([2, 7, 11, 15], 9))
