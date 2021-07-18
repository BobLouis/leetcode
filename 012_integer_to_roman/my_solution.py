class Solution:
    def intToRoman(self, num: int) -> str:
        value = [1000,  900,  500, 400, 100, 90,  50, 40,   10,  9, 5, 4, 1]
        num_char = ['M', 'CM', 'D', 'CD', 'C', 'XC',
                    'L', 'XL', 'X', 'IX', 'V', 'IV', 'I']
        result = ''
        for i in range(0, len(value)):
            while(num >= value[i]):
                num -= value[i]
                result += num_char[i]

        return result


s = Solution()
print(s.intToRoman(1994))
