#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
using namespace std;


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next() {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {

public:

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == nullptr){
            return nullptr;
        }

        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(left>1) {
            prev = curr;
            curr = curr->next;
            --left;
            --right;
        }
        //curr is on the first reverse place
        ListNode* connection_head = prev; //place before reverse array
        ListNode* reverse_tail = curr; //tail of the reverse array
        ListNode* next = nullptr;
        while(right>0){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            --right;
        }
        if(connection_head)
            connection_head->next = prev;
        else
            head = prev;
        reverse_tail->next = curr;
        return head;
    }
};

int main() {
    int arr[5]={1,2,3,4,5};
    ListNode* curr = nullptr;
    ListNode* prev = nullptr;
    ListNode* head = nullptr;
    for(int i=0;i<5;++i){

        prev = curr;
        curr = new ListNode(arr[i]);
        if(!i)
            head = curr;
        if(prev) {
            prev->next = curr;
        }
    }
    for(curr = head,prev = nullptr;curr!=nullptr;curr=curr->next){
        cout<<curr->val;
    }
    cout<<endl;


    Solution sol;
    head = sol.reverseBetween(head,2,5);
    for(curr = head,prev = nullptr;curr!=nullptr;curr=curr->next){
        cout<<curr->val;
    }

    return 0;
}

