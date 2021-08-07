# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def mergeKLists(self, lists) -> ListNode:
        if lists == [[]]:
            return None
        if lists == []:
            return None
        if len(lists) == 0:
            return None
        if len(lists) == 1:
            return list[1]
        cur = lists[0]
        for i in range(1, len(lists)):
            cur = self.mergeTwoLists(cur, lists[i])
        return cur

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
list3 = [2, 3, 8, 9, 10]

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

l3 = ListNode(list3[0])
cur = l3
for i in range(1, len(list3)):
    cur.next = ListNode(list3[i])
    cur = cur.next


cur = s.mergeKLists([[]])
while cur:
    print(cur.val)
    cur = cur.next
