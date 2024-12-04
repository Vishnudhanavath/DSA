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
Node* solution(Node* head, int x){
    if(head == nullptr) return nullptr;
    Node* temp = head;
    Node* prev = nullptr;
    if(head -> data == x){
        head = head -> next;
        delete temp;
        return head;
    }
    while(temp){
        if(temp -> data == x){
            prev -> next = temp -> next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head;
}

// Complexity Analysis:
// Time Complexity: O(N)

// In worst case, when the value is found at the tail and O(1) best case, when the value is found at the head.
// Space Complexity: O(1)

// As we have not used any extra space.
