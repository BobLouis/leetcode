class Solution:
    def threeSumClosest(self, nums: list[int], target: int) -> int:
        nums.sort()
        result = nums[0]+nums[1]+nums[2]
        for i, n in enumerate(nums):
            if(i > 0 and n == nums[i-1]):
                continue
            l = i + 1
            r = len(nums) - 1
            while(l < r):
                if abs(n+nums[l]+nums[r]-target) < abs(result-target):
                    result = n+nums[l]+nums[r]
                if((n+nums[l]+nums[r]) > target):
                    r -= 1
                elif((n+nums[l]+nums[r]) < target):
                    l += 1
                else:
                    return target

        return result


s = Solution()
arr = [-1, 2, 1, -4]
print(s.threeSumClosest(arr, 1))
