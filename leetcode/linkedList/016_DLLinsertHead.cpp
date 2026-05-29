Node * BeforeheadInsertionDLL(Node * head, int value){
    //head , next , backk
    Node * newHead = new Node(value, head, nullptr);
    head->back = newHead;

    return newHead;
}