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

void merge(Node* head1, Node* head2, int k){
    while(k--){
        head1 = head1->next;
    }
    while(head2->next!=NULL){
        head2 = head2->next;
    }
    head2->next = head1;
}

void display(Node* head){
    while(head!=NULL){
        cout << head->data <<" ";
        head= head->next;
    }
    cout << endl;
}

int mergePos(Node* head1, Node* head2){
    Node*temp1 = head1;
    Node* temp2 = head2;
    int size1 = 0, size2 = 0;
    while(temp1 !=NULL){
        temp1 = temp1->next;
        size1++;
    }

    while(temp2 !=NULL){
        temp2 = temp2->next;
        size2++;
    }
    temp1 = head1; temp2 = head2;
    int diff = size1-size2;
    int i = 0;
    while(i < diff){
        temp1 = temp1->next;
        i++;
    }

    while(temp1 != temp2 && temp1 !=NULL){
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if(temp1==NULL){
        return -1;
    }
    return temp1->data;
}

int main(){
    Node* head1 = NULL;
    Node* head2 = NULL;

    insert(head1, 1);
    insert(head1, 2);
    insert(head1, 3);
    insert(head1, 4);
    insert(head1, 5);
    insert(head1, 6);
    insert(head2, 56);
    insert(head2, 7);
    //merge(head1, head2, 3);
    display(head1);
    display(head2);

    cout << mergePos(head1, head2);
    return 0;
}