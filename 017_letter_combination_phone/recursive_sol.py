class Solution:
    def letterCombinations(self, digits: str) -> list[str]:
        res = []
        digitToChar = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "pqrs",
            "8": "tuv",
            "9": "wxyz"}

        def backTrack(i, curStr):
            if len(curStr) == len(digits):
                res.append(curStr)
                return
                backTrack(i+1, curStr+c)
        if digits:
            backTrack(0, "")
        return res


s = Solution()
print(s.letterCombinations("23"))
