#include <stdlib.h>
#include <string.h>
#include <assert.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
 


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode head;
    struct ListNode *h_ptr = &head;

    if(!list1 && !list2)
        return NULL;

    while (list1 && list2) {
        if (list1->val < list2->val) {
            h_ptr->next = list1;
            list1 = list1->next;
            h_ptr = h_ptr->next;
        } else {
            h_ptr->next = list2;
            list2 = list2->next;
            h_ptr = h_ptr->next;
        }
    }

    if(list1)
        h_ptr->next = list1;
    if(list2)
        h_ptr->next = list2;

    return head.next;

}