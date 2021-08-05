# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        dummy = ListNode(0)
        cur = dummy
        while l1 and l2:
            if l1.val < l2.val:
                cur.next = l1
                l1 = l1.next
            else:
                cur.next = l2
                l2 = l2.next
            cur = cur.next
        cur.next = l1 or l2
        return dummy.next


s = Solution()
list1 = [1, 6, 7, 8]
list2 = [2, 3, 5, 8, 9]
l1 = ListNode(list1[0])
cur = l1
for i in range(1, len(list1)):
    cur.next = ListNode(list1[i])
    cur = cur.next
l2 = ListNode(list2[0])
cur = l2
for i in range(1, len(list2)):
    cur.next = ListNode(list2[i])
    cur = cur.next
cur = s.mergeTwoLists(l1, l2)
while cur:
    print(cur.val)
    cur = cur.next
