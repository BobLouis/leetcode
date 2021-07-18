#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (dict[s[i]] > start)    //if dict[s[i]]>start means duplicated word occur after start
                start = dict[s[i]];    //the repeat occur so start must change to the new substring
            dict[s[i]] = i;            //record the char order
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};
int main() {
    Solution s;
    string str="pwwkewhjk";
    cout<<s.lengthOfLongestSubstring(str);

    return 0;
}

