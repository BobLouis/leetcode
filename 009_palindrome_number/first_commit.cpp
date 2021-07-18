class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return 0;
        long long reverse =0;
        int origin = x;
        while(x>0){
            reverse=(reverse*10+x%10);
            x/=10;
        }
        return reverse==origin ? 1:0;

    }
};
