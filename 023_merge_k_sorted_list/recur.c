#include <stdlib.h>
#include <string.h>
#include <assert.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
 


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;
  
    if (list1->val < list2->val) {
        list1->next = merge(list1->next, list2);
        return list1;
    } else {
        list2->next = merge(list1, list2->next);
        return list2;
    }

}
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize){
    struct ListNode  *new_head = NULL;
    
    for(int i=0;i<listsSize;i++){
        new_head = mergeTwoLists(new_head,lists[i]);
    }
    
    return new_head;
}