// we can do it better way by traversing and pushing it into stack
// and again insertion into the ll;
//tc:= O(n) = pushing and poping  and sc:= O(n);
//
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        if(head == nullptr|| head -> next== nullptr) return head;
        DLLNode*ptr;
        DLLNode* temp = head;
        while(temp){
           ptr = temp -> prev;
           temp -> prev = temp -> next;
           temp -> next = ptr;
            temp = temp -> prev;
        }
        return ptr-> prev;
        
    }
