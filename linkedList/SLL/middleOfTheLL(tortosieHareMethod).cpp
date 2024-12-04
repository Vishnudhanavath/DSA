
// Topics
// Companies
// Given the head of a singly linked list, return the middle node of the linked list.

// If there are two middle nodes, return the second middle node.

 

// Example 1:


// Input: head = [1,2,3,4,5]
// Output: [3,4,5]
// Explanation: The middle node of the list is node 3.

// https://leetcode.com/problems/middle-of-the-linked-list/





class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head == nullptr|| head ->next == nullptr) return head;
        ListNode*slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast  = fast->next->next;
        }
        return slow;

    }
};
