class solution(
public:
    ListNode* deleteMiddle(ListNode* head){
        ListNode* prevSlow = head;
        ListNode* slow = head;
        ListNode* fast = head;

        // deal with base case
        if (head == nullptr || head->next== nullptr){
            return nullptr;
        }

        while (fast && fast->next){
            fast = fast->next->next;
            prevSlow = slow;
            slow = slow->next;
        }
        prevSlow->next = prevSlow->next->next;
        return head;
    }
)