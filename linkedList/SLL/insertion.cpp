/*
class Node {
    public:
        int data;
        Node* next;
    public:
        Node(int value, Node* address){
            data = value;
            next = address;
        }
    public:
        Node(int value){
            data = value;
            next = NULL;
        }
};
*/
Node* solution(Node* head, int a){
    // head nullptr then create new as the head;
    if(head == nullptr){
        return new Node(a);
    }
   Node* temp = new Node(a);
   temp -> next = head;
   return temp;
}

//=======================================================
// tail insertion
Node* solution(Node* head, int a){
    Node* curr = new Node(a);
    if(head == nullptr){
        return curr;
    }
    Node*temp = head;
    while(temp -> next){
        temp = temp -> next;
    }
    temp -> next = curr;
    return head;
    
}
//=====================================================================================================
//INSERT AT KTH POSITION
Node* solution(Node* head, int k, int data){
    Node* curr = new Node(data);
    if(head == nullptr){
        if(k == 0){
            return head;
        }else if(k != 0){
            return head;
        }
    }
    if(k == 0){
        curr -> next = head;
        return curr;
    }
    Node*temp = head;
    Node* prev = nullptr;
    int i =0;
    while(temp){
        if(i == k){
            curr -> next = temp;
            prev -> next = curr;
            break;
        }
        i++;
        prev = temp;
        temp = temp -> next;
    }
    i++;
    if(k == i){
        prev -> next = curr;
    }
    return head;
}
//==================================================================
//before XTh element 

Node* solution(Node* head, int x, int data){
    Node* curr = new Node(data);
    if(head == nullptr){
        return head;
    }
    if(head-> data == x){
        curr-> next = head;
        return curr;
    }
    Node* temp = head;
    Node* prev = nullptr;
    while(temp){
        if(temp-> data == x){
            curr-> next = temp;
            prev -> next = curr;
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head;
}
