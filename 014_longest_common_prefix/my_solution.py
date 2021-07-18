import time


class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        result = strs[0]
        lens = len(result)
        for j in range(1, len(strs)):
            i = 0
            while(i < min(lens, len(strs[j])) and (result[i] == strs[j][i])):
                i += 1
            lens = min(lens, i)

        return result[0:lens]


start_time = time.time()
s = Solution()
strs = ["flower", "flow", "flight"]
print(s.longestCommonPrefix(strs))
print("--- %s seconds ---" % (time.time() - start_time))
