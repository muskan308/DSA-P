#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int data){
			this->data = data;
			next = NULL;
		}
};

void insert(Node* &head, int val){
	Node* newNode = new Node(val);
	if(head==NULL){
		head= newNode;
		newNode->next = head;
		return;
	}
	
	Node* temp = head;
	while(temp->next != head){
		temp = temp->next;
	}
	
	temp->next = newNode;
	newNode->next = head;
}

void deleteNode(Node* &head, int pos){
	Node* temp = head;
	if(pos == 1){
		while(temp->next!=head){
			temp = temp->next;
		}
		temp->next = head->next;
		Node* p = head;
		head = head->next;
		delete p;
		return;
	}
	
	int k = 2;
	do{
		if(k==2) break;
		temp = temp->next;
		k++;
	}while(k < pos && temp!=head);
	
	Node* p = temp->next;
	temp->next = temp->next->next;
	delete p;
}

void display(Node* head){
	Node* temp = head;
	do{
		cout << head->data <<" ";
		head = head->next;
	}while(head != temp);
	cout << endl;
}

int main(){
	Node* head = NULL;
	int arr[] = {1,2,3,4,5};
	for(int i = 0 ;i < 5 ; i++){
		insert(head, arr[i]);
	}
	display(head);
	
	deleteNode(head, 2);
	display(head);
	return 0;
}
