#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution {

private:
    string sumAll(vector<vector<int>> & res){
        string result;



        return result;
    }
    vector <int> mul_one(string num1, char num2,int zeros){

    }
public:
    string multiply(string num1, string num2) {
        vector<vector<int>> res;

        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());

        for(int i = 0; i < num2.size(); ++i){
            res.push_back(mul_one(num1,num2[i],i));
        }
        string res_str = sumAll(res);
        reverse(res_str.begin(),res_str.end());
        return res_str;
    }
};