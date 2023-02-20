struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode listHead = {.val = 0, .next = head};
    struct ListNode *runner = head, *chaser = &listHead;
    
    while (runner && runner->next) {
        // Swapping nodes
        chaser->next = runner->next;
        runner->next = runner->next->next;
        chaser->next->next = runner;
        
        // Setting up for next swap
        runner = runner->next;
        chaser = chaser->next->next;
    }
    return listHead.next;
}