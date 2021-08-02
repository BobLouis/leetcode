class Solution:
    def fourSum(self, nums: list[int], target: int) -> list[list[int]]:
        def findNSum(nums, target, N, result, results):
            if len(nums) < N or len(nums) < N or target < nums[0]*N or target > nums[-1]*N:
                return
            if N == 2:
                l, r = 0, len(nums)-1
                while l < r:
                    s = nums[l]+nums[r]
                    if s == target:
                        results.append(result + [nums[l], nums[r]])
                        l += 1
                        r -= 1
                        while (l < r and nums[l] == nums[l-1]):
                            l += 1
                        while (l < r and nums[r] == nums[r+1]):
                            r -= 1
                    elif s < target:
                        l += 1
                    else:
                        r -= 1
            else:
                for i in range(0, len(nums) - N + 1):
                    if (nums[i]*N > target):
                        break
                    if(i == 0 or (i > 0 and nums[i] != nums[i-1])):
                        findNSum(nums[i+1:], target - nums[i],
                                 N-1, result+[nums[i]], results)

        results = []
        result = []
        nums.sort()
        findNSum(nums, target, 4, result, results)
        return results


s = Solution
nums = [2, 2, 2, 2, 2]
target = 8
print(s.fourSum(nums, nums, target))
