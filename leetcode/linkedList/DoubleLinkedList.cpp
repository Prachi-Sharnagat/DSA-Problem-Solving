#include<bits/stdc++.h>
using namespace std;

struct Node {
    public:
    int data;
    Node * next;
    Node * back;

    public:
    Node(int data1 , Node* next1, Node * back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr; 
        back = nullptr;
    }

};
// convert array into doubly linked list
Node* convertArrayToDoubleLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=0;  i<n; i++){
        Node * temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;

    }

}


int main(){
    vector<int> arr = {2 , 5 , 7 ,9};
    Node* head = new Node(arr[0]);
    // Node * prev = head ;
    // Node * head = convertArrayToDoubleLL(arr);




    return 0;
}