class Solution {
public:
    int myAtoi(string s) {
        int arrow=0;
        long long res=0;
        bool nega=0;
        bool read_num=0;
        int count=0;
        while(arrow<s.length()){
            if(s[arrow]>47&&s[arrow]<58){
                res=res*10+(long long)(s[arrow]-'0');
                if(!read_num&&res>0)
                    read_num=1;
                if(read_num)
                    ++count;
                if(!(s[arrow+1]>47&&s[arrow+1]<58))
                    break;
            }
            if(s[arrow]=='-'&&s[arrow+1]>47&&s[arrow+1]<58){
                nega=1;
            }
            if(!count){
                if(s[arrow]!='+'&&s[arrow]!=' '&&s[arrow]!='-'&&!(s[arrow]>47&&s[arrow]<58))
                    return 0;

                if(s[arrow]=='+'&& (s[arrow+1]=='-'||s[arrow+1]==' '||s[arrow+1]=='+'))
                    return 0;
                if(s[arrow]=='-'&& (s[arrow+1]=='+'||s[arrow+1]=='-'))
                    return 0;
            }
            if(count>10)
                return (nega)?INT_MIN:INT_MAX;


            ++arrow;
        }
        if(nega)
            return (res>INT_MAX)?INT_MIN:-res;
        else{
            return (res>=INT_MAX)?INT_MAX:res;

        }
    }
};
int main() {
    Solution s;
    string num="  0000000000012345678";
    cout<<s.myAtoi(num)<<endl;
    return 0;
}
