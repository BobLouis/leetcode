import time


class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        result = strs[0]
        lens = len(result)
        for str in strs:
            i = 0
            while(i < min(lens, len(str)) and (result[i] == str[i])):
                i += 1
            lens = min(lens, i)

        return result[0:lens]


start_time = time.time()
s = Solution()
strs = ["flower", "flow", "flight"]
print(s.longestCommonPrefix(strs))
print("--- %s seconds ---" % (time.time() - start_time))
