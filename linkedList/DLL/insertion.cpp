
Node* solution(Node* head, int k, int a){
    Node* curr = new Node(a);
    if(head == nullptr){
       if(k == 0){
           return curr;
       }
       return head;
    }
    if(k == 0){
        curr->next = head;
        head -> prev = curr;
        return curr;
    }
    Node* temp = head;
    Node* ptr = nullptr;
    int i =0;
    while(temp){
        if(i == k){
            curr-> next = temp;
            temp -> prev = curr;
            ptr -> next = curr;
            curr->prev = ptr;
            break;
        }
        i++;
        ptr = temp;
        temp = temp -> next;
    }
    i++;
    if(i == k){
        curr-> next = temp;
        ptr -> next = curr;
        curr->prev = ptr;
    }
    return head;
    
}
