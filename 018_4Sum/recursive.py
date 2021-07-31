class Solution:
    def fourSum(self, nums: list[int], target: int) -> list[list[int]]:
        def findNSum(nums, target, N, result, results):
            if len(nums) < N or len(nums) < N or target < nums[0]*N or target > nums[-1]*N:
                return
            if N == 2:
                l, r = 0, len(nums)-1
                while i < r:
                    s = nums[l]+nums[r]
                    if
