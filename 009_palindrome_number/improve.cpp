#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x>0&&x%10==0))
            return 0;
        long long reverse =0;
        int origin = x;
        //we can only convert the half
        while(x>reverse){
            reverse=(reverse*10+x%10);
            x/=10;
            //cout<<x<<"   "<<reverse<<endl;
        }
        return (x==reverse || x==reverse/10);
        //if x=even pieces of number =>x==reverse
        //if x=odd  pieces of number =>x==reverse/10  cause we don't care about the letter in the middle
    }
};
int main() {
    int input = 121;
    int target = 6;
    Solution s;
    cout<<s.isPalindrome(input);


    return 0;
}

