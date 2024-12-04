Node* solution(Node* head, int k){
    if(head == nullptr){
      return nullptr;
    }
    if(k == 0){
        Node* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
    int i = 0;
    Node* temp = head;
    Node* ptr = nullptr;
    while(temp){
        if(i == k){
            ptr -> next = temp -> next;
            if(temp -> next){
                 temp -> next -> prev = ptr;
            }
            temp -> next  = nullptr;
            temp -> prev = nullptr;
            delete temp;
            break;
        }
        i++;
        ptr = temp;
        temp = temp -> next;
    }
    return head;
}
// Use Case	Time Complexity	Space Complexity
// Delete head	O(1)	O(1)
// Delete tail	O(N)	O(1)
// Delete Kth node	O(N)	O(1)
