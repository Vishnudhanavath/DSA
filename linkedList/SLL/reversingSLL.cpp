// BruteForce approach is pushing to stack and again using the previous linkedList
// tc:= O(n) , sc:= O(n)
//==================================
//better method is:
class Solution {
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head-> next == nullptr) return head;
        ListNode* back = nullptr;
        ListNode* front = head-> next;
        while(head){
            head -> next = back;
            back = head;
            head = front;
            if(front != nullptr){
            front = front->next;
            }
        }
        return back;
    }
};


// optimal methods :
ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head ->next == nullptr) return head;
        ListNode* prev = nullptr;
        while(head){
            ListNode* front = head->next;
            head -> next = prev;
            prev = head;
            head = front;
        }
        return prev;
    }
};
reversing with recursion
//========================================
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head -> next == nullptr)return head;
        ListNode* newHead = reverseList(head-> next);
        ListNode* front = head-> next;
        front-> next = head;
        head-> next = nullptr;
        return newHead;
    }
};
