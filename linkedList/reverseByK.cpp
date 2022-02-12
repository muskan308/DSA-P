#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

   
    node(int data){
        this->data = data;
        next = NULL;
    }
};

void insert(node* &head, int data){
    node *newNode = new node(data);

    if(head==NULL){
        head = newNode;
        return;
    }

    node* temp = head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(node* head){
    while(head!=NULL){
        cout << head->data<<" ";
        head = head->next;
    }
}

node* reverseRec(node* &head){
	if(head==NULL || head->next == NULL){
		return head;
	}
	node* newHead = reverseRec(head->next);
	head->next->next = head;
	head->next = NULL;
	return newHead;
}

node* reverseByK(node* &head, int K){
	
	node* curr = head;
	node* nextptr;
	node* prev = NULL;
	int count = 0;
	while(curr!=NULL && count < K){
		nextptr = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nextptr;
		count++;
	}	
	if(nextptr!=NULL)
		{
			head->next = reverseByK(nextptr, K);
		
		}
	return prev;
	
}

int main(){
    node* head = NULL;
    insert(head, 1);
    insert(head,2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
//    display(head);
//    node* n = reverseRec(head);
//    display(n);
    node *nm = reverseByK(head,2);
    display(nm);
    return 0;
}
