class solution{
public:
    ListNode* reverseList(ListNode* head){
        ListNode* fast = head, slow = nullptr, next = nullptr;

        while (fast != nullptr){
            next = fast->next;
            fast->next = slow;
            slow = fast;
            fast = next;
        }
        return slow;
    }
}

// This method uses three pointers. Next is used to store the next node, while the fast and slow are used to reverse the link.

