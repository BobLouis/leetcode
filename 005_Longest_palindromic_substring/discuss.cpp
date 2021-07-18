#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;


class Solution {
private:
    int lo=0;
    int max=0;
    int len;
public:
    string longestPalindrome(string s) {
        len = s.length();
        if(len <2)
            return s;

        for(int i=0;i<len-1;++i){
            findSubstring(s,i,i);  //find the odd palindrome
            findSubstring(s,i,i+1);  //find the even palindrome
        }
        cout<<lo<<" "<<max<<endl;
        return s.substr(lo,max);

    }

    void findSubstring(string s,int left,int right){
        if(s[left]!=s[right])
            return;
        while(left>0 && right<len && s[left-1]==s[right+1]){
            --left;
            ++right;
        }
        if((right-left+1)>max){
            lo=left;
            max=right-left+1;
        }
    }

};


int main() {
    Solution s;
    string str="ababawer";
    cout<<s.longestPalindrome(str);


    return 0;
}

