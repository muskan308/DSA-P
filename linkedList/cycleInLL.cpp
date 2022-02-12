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

void createCycle(node* head){
	node* temp = head;
	int k = 0;
	while(k<3){
		temp = temp->next;
		k++;
	}	
	node* ctemp = head;
	while(ctemp->next!=NULL){
		ctemp = ctemp->next;
	}
	ctemp->next = temp; //1 2 3 4 5
}

bool detectCycle(node* head){
	node* hare = head;
	node *tortoise= head;
	while(hare != NULL && hare->next !=NULL){
		hare = hare->next->next;
		tortoise = tortoise->next;
		
		if(tortoise==hare) {
			return true;
		}
	}
	
	return false;
}

void display(node* head){
    while(head!=NULL){
        cout << head->data<<" ";
        head = head->next;
    }
}

node* removeCycle(node* &head){
	node* fast = head;
	node* slow = head;
	do{
		fast = fast->next->next;
		slow = slow->next;
	}while(fast!=slow);
	
	fast = head;
	while(fast->next != slow->next){
		fast = fast->next;
		slow = slow->next;
	}
	slow->next = NULL;
}

int main(){
	node* head = NULL;//1 2 3 4 5 6
	insert(head,1);
	insert(head,2);
	insert(head,3);
	insert(head,4);
	insert(head,5);
	insert(head,6);
	createCycle(head);
//	display(head);
	cout << detectCycle(head);
	cout << endl;
	removeCycle(head);
	display(head);
	cout << detectCycle(head);
	return 0;
}
