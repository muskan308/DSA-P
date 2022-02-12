#include <iostream>
using namespace std;


class Node{
	public:
		int data;
		Node* next;
		Node(int data){
			this->data= data;
			next = NULL;
		}
};

void insert(Node* &head, int val){
	Node* newNode = new Node(val);
	if(head==NULL){		
		head = newNode;
		return;
	}
	
	Node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = newNode;

}

Node* firstOddEven(Node* head){//1 2 3 4 5 6 7
	
	Node* odd = head, *even = head->next;
	Node* firstEven = even;
	while(odd->next!=NULL && even->next!=NULL){
		odd->next = even->next;
		odd = odd->next;
		even->next = odd->next;
		even = even->next;
	}
	odd->next = firstEven;
	//even->next = NULL;
	return head;
}

void display(Node* head){
	while(head!=NULL){
		cout << head->data <<" ";
		head = head->next;
	}
	cout << endl;
}

int main(){
	Node* head = NULL;
	int arr[] = {1,2,3,4,5,6,7};
	for(int i = 0 ;i < 7 ; i++){
		insert(head, arr[i]);
	}
	Node* newHead = firstOddEven(head);
	display(newHead);
	return 0;
}
