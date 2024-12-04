//BruteForec
//linkedofLeetcode:= 
//https://leetcode.com/problems/palindrome-linked-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == nullptr) return false;
        if(head-> next == nullptr) return true;
        ListNode* temp = head;
        stack<int>st;
        while(temp){
            st.push(temp->val);
            temp = temp-> next;
        }
        while(!st.empty()){
            int curr = st.top();
            st.pop();
            if(curr != head->val){
                return false;
            }
            head = head-> next;
        }
        return true;
    }
};
// tc - O(2*n) sc:= sc:= O(n)




//optimal approach 


public:
    ListNode* reverseLL(ListNode* head){
        if(head == nullptr || head-> next == nullptr) return head;
        ListNode* prev = nullptr;
        while(head){
            ListNode* front = head-> next;
            head-> next =prev;
            prev = head;
            head = front;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head-> next == nullptr) return true;
        ListNode* slow = head;
        ListNode*fast = head;
        while(fast && fast-> next){ // O(n/2)
            slow = slow-> next;
            fast = fast-> next->next;
        }
        ListNode* newHead = reverseLL(slow);
        while(newHead){  // O(n/2)
            if(head-> val != newHead-> val) return false;
            head = head-> next;
            newHead = newHead->next;
        }
        return true;
    }
};
// tc:= O(n) and sc:= O(1)
