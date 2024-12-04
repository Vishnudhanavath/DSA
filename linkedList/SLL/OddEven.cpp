 // Odd Even Linked List

// Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.
// The first node is considered odd, and the second node is even, and so on.
// Note that the relative order inside both the even and odd groups should remain as it was in the input.
// You must solve the problem in O(1) extra space complexity and O(n) time complexity.

 

// Example 1:


// Input: head = [1,2,3,4,5]
// Output: [1,3,5,2,4]
// Example 2:


// Input: head = [2,1,3,5,6,4,7]
// Output: [2,3,6,7,1,5,4]
 

// Constraints:

// The number of nodes in the linked list is in the range [0, 104].
// -106 <= Node.val <= 106



// bruteForce 
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head -> next == nullptr) return head;
        ListNode* temp = head;
        int count = 0;
        queue<int>st1,st2;
        while(temp){ // O(n)
          count++;
          if(count%2 != 0){
            st1.push(temp-> val);
          }
          else{
            st2.push(temp -> val);
          }
          temp = temp -> next;
        }
        temp = head;
        while(!st1.empty()){                   //O(n/2)
            temp -> val = st1.front();
            st1.pop();
            temp = temp-> next;
        }
        while(!st2.empty()){                     // O(n/2)
            temp -> val = st2.front();
            st2.pop();
            temp = temp -> next;
        }
        return head;
    }
};
// sc: = O(n) tc: = O(n)
//=================================================================================
 ListNode* oddEvenList(ListNode* head) {
      if(head == nullptr || !head-> next) return head;
        int count = 1;
        ListNode* temp1 = head;
        ListNode* temp2 = head-> next;
        ListNode* newHead = head-> next;
        while(temp1 -> next && temp2 -> next){
            if(count%2 == 1){
                temp1 -> next = temp2-> next;
                count++;
                temp1 = temp1-> next;
            }else{
                temp2 -> next = temp1-> next;\
                count++;
                temp2 = temp2-> next;
            }
        }
        temp2 -> next =nullptr;
        temp1 -> next = newHead;
        return head;   
    }

//
