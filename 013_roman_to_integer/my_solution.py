class Solution:
    def romanToInt(self, s: str) -> int:
        value = [1000,  900,  500, 400, 100, 90,  50, 40,   10,  9, 5, 4, 1]
        num_char = ['M', 'CM', 'D', 'CD', 'C', 'XC',
                    'L', 'XL', 'X', 'IX', 'V', 'IV', 'I']
        result = 0
        char_length = 0
        for i in range(0, len(value)):
            char_length = len(num_char[i])
            while(s[0:char_length] == num_char[i]):
                s = s[char_length:]
                result += value[i]
        return result


s = Solution()
str = "MCMXCIV"
print(s.romanToInt(str))
