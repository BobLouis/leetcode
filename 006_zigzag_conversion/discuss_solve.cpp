#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;


class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> str(numRows,"");
        string ans="";

        int len=s.length(),i=0;
//        cout<<len<<endl;
        while(i<len){
            for(int j=0;j<numRows&&i<len;++j)
                str[j].push_back(s[i++]);
//            cout<<"in loop"<<i<<endl;
            for(int j=numRows-2;j>0&&i<len;--j)
                str[j].push_back(s[i++]);
//            cout<<"in loop"<<i<<endl;
        }
//        cout<<str[0]<<endl;
        for(int i=0;i<numRows;++i){
            ans+=str[i];
        }
        return ans;
    }
};

int main() {
    Solution s;
    string str="PAYPALISHIRING";
    cout<<s.convert(str,3);


    return 0;
}

