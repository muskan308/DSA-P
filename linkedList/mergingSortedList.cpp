#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insert(Node* &head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

void display(Node* head){
    while(head!=NULL){
        cout << head->data <<" ";
        head= head->next;
    }
    cout << endl;
}

//iterative method to merge sorted linkedlist

Node* sortedMerge(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* retHead = NULL;
    Node* newHead = new Node(0);
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data < temp2->data){
            if(retHead == NULL){
                retHead = temp1;
            }
            newHead->next = temp1;
            newHead = temp1;
            temp1 = temp1->next;
        }else{
            if(retHead == NULL){
                retHead = temp2;
            }
            newHead->next = temp2;
            newHead = temp2;
            temp2 = temp2->next;
        }
    }

    while(temp1!=NULL){
        newHead->next = temp1;
        newHead = temp1;
        temp1 = temp1->next;
    }

    while(temp2!=NULL){
        newHead->next = temp2;
        newHead = temp2;
        temp2 = temp2->next;
    }
    return retHead;
}

//recursive method to merge sorted linkedlist

Node* recMerge(Node* head1, Node* head2){

    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }

    Node* result;
    if(head1->data < head2->data){
        result = head1;
        result->next = recMerge(head1->next, head2);
    }else{
        result = head2;
        result->next = recMerge(head1, head2->next);
    }
    return result;
}

int main(){
    Node* head1 = NULL;
    Node* head2 = NULL;

    insert(head1, 1);
    insert(head1, 45);
    insert(head1, 46);
    insert(head1, 90);
    insert(head2, 12);
    insert(head2, 30);
    insert(head2, 100);
    display(head1);
    display(head2);
    Node* retHead = recMerge(head1, head2);
    display(retHead);
    return 0;
}