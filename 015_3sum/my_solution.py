class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        if len(nums) < 3:
            return []
        nums.sort()
        result = []
        for i, n in enumerate(nums):
            if (n > 0):
                break
            if(i > 0 and n == nums[i-1]):
                continue
            l = i + 1
            r = len(nums) - 1
            target = n*-1
            while(l < r):
                if((nums[l]+nums[r]) > target):
                    r -= 1
                elif((nums[l]+nums[r]) < target):
                    l += 1
                else:
                    result.append([n, nums[l], nums[r]])
                    while (nums[l] == nums[l+1] and nums[r] == nums[r-1]):
                        l += 1
                        r -= 1

                    l += 1
                    r -= 1

        return result


s = Solution()
arr = [-2, 0, 0, 2, 2]
print(s.threeSum(arr))
