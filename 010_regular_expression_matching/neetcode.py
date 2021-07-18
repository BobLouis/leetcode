class solution:
    def isMatch(self, s: str, p: str) -> bool:
        # top down memoization

        cache = {}

        def dfs(i, j):
            if(i, j) in cache:
                return cache[(i, j)]
            if i == len(s) and j == len(p):
                return True
            if j >= len(p):
                return False

            match = i < len(s) and (s[i] == p[j] or p[j] == ".")
            if (j+1) < len(p) and p[j+1] == "*":
                cache[(i, j)] = (dfs(i, j+2) or  # don't use the *
                                 (match and dfs(i+1, j)))  # use the *
                return cache[(i, j)]
            if match:
                cache[(i, j)] = dfs(i+1, j+1)
                return cache[(i, j)]
            cache[(i, j)] = False

        return dfs(0, 0)


s = solution()

str = "aaaa"
p = "a*"
print(s.isMatch(str, p))
