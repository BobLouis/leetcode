class Solution:
    def letterCombinations(self, digits: str) -> list[str]:
        ans = []
        if not digits:
            return ans
        map = ["0", "1", "abc", "def", "ghi",
               "jkl", "mno", "pqrs", "tuv", "wxyz"]
        ans.append("")
        for i, n in enumerate(digits):
            index = int(digits[i])
            while len(ans[0]) == i:
                temp = ans.pop(0)
                for c in map[index]:
                    ans.append(temp+c)
        return ans


s = Solution()
print(s.letterCombinations("23"))
