class Solution:
    # brute force
    def maxArea(self, height: list[int]) -> int:
        # brute force
        #     result = 0
        #   for l in range(len(height)):
        #         for r in range(l+1, len(height))
        #             area = (r-l) * min(height[l], height[r])
        #             result = max(area, result)
        #     return result

        # linear time solution: O(n)
        result = 0
        l, r = 0, len(height)-1
        while l < r:
            area = (r-l)*min(height[l], height[r])
            result = max(result, area)

            if height[l] < height[r]:
                l += 1
            else:
                r -= 1
        return result


s = Solution()
height = [1, 8, 6, 2, 5, 4, 8, 3, 7]
print(s.maxArea(height))
