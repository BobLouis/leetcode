#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int n1=0,n2=0,index;
        double med;
        while(n1!=nums1.size()&&n2!=nums2.size()){
            if(nums1[n1]<=nums2[n2]&&n1!=nums1.size()){
                arr.push_back(nums1[n1]);
                ++n1;
            }else if(nums2[n2]<nums1[n1]&&n2!=nums2.size()){
                arr.push_back(nums2[n2]);
                ++n2;
            }
        }
        if(n1!=nums1.size()){
            for(int i=n1;i<nums1.size();++i){
                arr.push_back(nums1[i]);
            }
        }
        if(n2!=nums2.size()){
            for(int i=n2;i<nums2.size();++i){
                arr.push_back(nums2[i]);
            }
        }
//        for(int i=0;i<arr.size();++i){
//            cout<<arr[i]<<" ";
//        }
        cout<<endl;
        index=arr.size()/2;
        if(arr.size()%2==1){
            med=arr[index];
        }else{
            med=(double)(arr[index]+arr[index-1])/2;
        }

        return med;
    }
};


int main() {
    Solution s;
    vector<int> l1{3};
    vector<int> l2{-2,-1};
    cout<<s.findMedianSortedArrays(l1,l2);

    return 0;
}

