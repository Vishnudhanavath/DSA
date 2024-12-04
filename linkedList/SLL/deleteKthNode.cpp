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
Node* solution(Node* head, int k){
    //if head == nullptr;
    if(head == nullptr) return head;
    //k == 0 
    Node* temp = head;
    if(k == 0){
        head = head-> next;
        delete temp;
        return head;
    }
    Node* prev = nullptr;
    int i =0;
    while(temp){
        if(i == k){
            prev ->next = temp -> next;
            temp -> next = nullptr;
            delete temp;
            break;
        }
        i++;
        prev =temp;
        temp = temp -> next;
    }
   return head;
}
