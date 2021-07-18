#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry =0;
        int val1,val2;
        ListNode *ans = new ListNode((l1->val+l2->val)%10, nullptr);
        ListNode *last = new ListNode();
        carry=(l1->val+l2->val)/10;
        if(l1!=nullptr)
            l1=l1->next;
        if(l2!=nullptr)
            l2=l2->next;

        while(l1!=nullptr||l2!=nullptr||carry){
            if(l1!=nullptr){
                val1=l1->val;
            }else{
                val1=0;
            }
            if(l2!=nullptr){
                val2=l2->val;
            }else{
                val2=0;
            }

            ListNode *p = new ListNode((val1+val2+carry)%10,nullptr);
            if(carry)
                carry=(val1+val2+1)/10;
            else
                carry=(val1+val2)/10;

            if(ans->next == nullptr){
                ans-> next = p;
                last = p;
            }else{
                last-> next = p;
                last = p;
            }
            if(l1!=nullptr){
                l1=l1->next;
            }

            if(l2!=nullptr){
                l2=l2->next;
            }
        }
        return ans;
    }
};
int main() {
    Solution s;
    int arr1[] = {9,9,9,9,9,9,9};  //428
    int arr2[] = {9,9,9,9};  //249  =>  677
    int answer[] = {7,7,6};
    ListNode *l1=new ListNode(arr1[0],NULL);
    ListNode *l2=new ListNode(arr2[0],NULL);
    ListNode *last = new ListNode();
    ListNode *ans = new ListNode();
    for(int i=1;i<(sizeof(arr1)/4);++i){
        ListNode* p = new ListNode(arr1[i],NULL);
        if(l1->next == NULL){
            l1->next=p;
            last=p;
        }else {
            last->next = p;
            last = p;
        }
    }
    for(int i=1;i<(sizeof(arr2)/4);++i){
        ListNode* p = new ListNode(arr2[i],NULL);
        if(l2->next == NULL){
            l2->next=p;
            last=p;
        }else {
            last->next = p;
            last = p;
        }
    }
    //print out the linked list
//    for(struct ListNode *ptr=l1;ptr!=NULL;ptr=ptr->next){
//        cout<<ptr->val;
//    }
//    cout<<endl;
//    for(struct ListNode *ptr=l2;ptr!=NULL;ptr=ptr->next){
//        cout<<ptr->val;
//    }

    ans = s.addTwoNumbers(l1,l2);
    for(struct ListNode *ptr=ans;ptr!=NULL;ptr=ptr->next){
        cout<<ptr->val;
    }



    return 0;
}

