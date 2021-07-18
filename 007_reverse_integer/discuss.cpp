#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
using namespace std;


class Solution {
public:
    int reverse(int x) {
        long long res = 0;
        while(x) {
            res = res*10 + x%10;
            x /= 10;
        }
        return (res<INT_MIN || res>INT_MAX) ? 0 : res;
    }
};
int main() {
    Solution s;
    int num=1534236469;
    cout<<s.reverse(num)<<endl;
    cout<<INT_MIN<<endl;
    return 0;
}

