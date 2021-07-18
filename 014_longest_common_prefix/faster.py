import time


class Solution:
    def longestCommonPrefix(self, strs):
        if not strs:
            return ""
        shortest = min(strs, key=lambda k: len(k))
        print(shortest)
        for i, ch in enumerate(shortest):
            for other in strs:
                if other[i] != ch:
                    return shortest[:i]
        return shortest


start_time = time.time()
s = Solution()
strs = ["flower", "flow", "flight"]
print(s.longestCommonPrefix(strs))
print("--- %s seconds ---" % (time.time() - start_time))
