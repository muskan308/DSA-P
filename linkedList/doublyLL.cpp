#include <iostream>

using namespace std;

class doublyLL{
	public:
	int data;
	doublyLL* next;
	doublyLL* prev;
	doublyLL(int data){
		this->data = data;
		next = NULL;
		prev = NULL;
	}	
};

void insert(doublyLL* &head, int val){
	
	doublyLL* newNode = new doublyLL(val);
	if(head == NULL){
		head = newNode;
		return;
	}
	
	doublyLL* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;
}

void insertAtHead(doublyLL* &head, int val){
	doublyLL* newNode = new doublyLL(val);
	if(head==NULL){
		head = newNode;
		return;
	}
	newNode->next = head;
	head->prev = newNode;
	head = newNode;
		
}

void deleteNode(doublyLL* &head, int pos){
	if(pos == 1){
		doublyLL *p = head;
		head->next->prev = head->prev;
		head = head->next;
		delete p;
		return;
	}
	doublyLL * temp =head;
	int k = 2;
	while(temp!=NULL && k<pos){
		temp = temp->next;
		k++;
	}
	doublyLL *p = temp->next;
	temp->next = temp->next->next;
	if(temp->next !=NULL)
		temp->next->prev = temp;
	
	delete p;
}

void display(doublyLL* head){
	while(head != NULL){
		cout << head->data <<" ";
		head = head->next;
	}
	cout << endl;
}

void insertLastKToFront(doublyLL* &head, int k){
	
	int size = 1;
	doublyLL* temp = head;
	while(temp->next !=NULL){
		temp = temp->next;
		size++;
	}
	doublyLL* temp1 = head;	
	int K=1;
	k = size-k;
	while(K != k){
		temp1 = temp1->next;
		K++;
	}
	
	head->prev = temp;
	temp->next = head;
	head = temp1->next;
	temp1->next->prev = NULL;
	temp1->next = NULL;
	
}
int main(){
	doublyLL *head = NULL;
	insert(head,1);
	insert(head,2);
	insert(head,3);
	insert(head,4);
	insert(head,5);
	insertAtHead(head, 98);
	display(head);
	deleteNode(head, 6);
	display(head);
	deleteNode(head,1);
	display(head);
	insertLastKToFront(head,2);
	display(head);
	return 0;
}
