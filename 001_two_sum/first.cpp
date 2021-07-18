#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a,b;
        for(int i=0;i<nums.size();++i){
            for(int j=i+1;j<nums.size();++j){
                if(nums[i]+nums[j]==target){
                    a=i;
                    b=j;
                }
            }
        }

        vector<int> result = {a,b};
        return result;
    }
};
int main() {
    vector<int> num = {2,7,11,15};

    int target = 26;
    Solution S;
    vector<int> answer (S.twoSum(num,target));
    cout<<answer[0];
    cout<<answer[1];
    return 0;
}

