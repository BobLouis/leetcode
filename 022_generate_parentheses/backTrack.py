class Solution:
    def generateParenthesis(self, n: int) -> list[str]:
        def back(left, right, ans, results):
            if left:
                back(left-1, right, ans + '(', results)
            if left < right:
                back(left, right-1, ans + ')', results)
            if not right:
                results.append(ans)
        results = []
        back(n, n, '', results)
        return results


s = Solution
print(s.generateParenthesis(3, 3))
