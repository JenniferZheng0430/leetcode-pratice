#include <iostream>
#include <string>
#include <unordered_set>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *detectCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast){
            //相遇
            ListNode* n1 = fast;
            ListNode* n2 = head;
            
            while (n1 != n2){
                n1 = n1->next;
                n2 = n2->next;
            }
        }

    }
    return nullptr;
}

//第二种解法：hash map
ListNode *detectCycle(ListNode *head) {
    unordered_set<ListNode*> visited;
    while(head != NULL){
        if(visited.count(head))     //若在哈希表中发现有遍历过的结点
            return head;            //则返回此环的起始结点
        visited.insert(head);       //若在哈希表中没找到，则将其插入表中
        head = head->next;          //头结点继续向后移动
    }
    return NULL;            //若遍历到为空，则说明链表一定无环
}