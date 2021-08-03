# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        dummy = ListNode(0, head)
        left = dummy
        right = head

        while n > 0:
            right = right.next
            n -= 1
        while right:
            right = right.next
            left = left.next

        # deletion
        left.next = left.next.next
        return dummy.next


s = Solution()
list = [1, 2, 3, 4, 5]
head = ListNode(list[0], None)
ptr = head
for i in range(1, len(list)):
    ptr.next = ListNode(list[i], None)
    ptr = ptr.next
ptr = head
head = s.removeNthFromEnd(head, 2)
while ptr:
    print(ptr.val, '')
    ptr = ptr.next
