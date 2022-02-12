#include <iostream>

using namespace std;

class LL{
    public:
    int data;
    LL* next;
    LL(int d){
        data = d;
        next = NULL;
    }
};

void insertAtTail(LL* &head, int data){
    LL* newNode = new LL(data);
    if(head == NULL){
        head = newNode;
        return;
    }

    LL *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtStart(LL* &head, int data){
	LL* newNode = new LL(data);
	newNode->next = head;
	head = newNode;	
}

void insert(LL* &head, int data, int pos){  //2 3 4 5
	LL* newNode = new LL(data);
	pos -= 2;
	LL* temp = head;
	while(pos--){
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next =  newNode;
}

void del(LL* head, int val){
	if(head == NULL){
		return;
	}
	if(head->next == NULL){
		if(head->data == val){
			LL* toDel = head;
			head->next = head->next->next;
			delete toDel;
		}
	}
	LL* temp = head;
	while(temp->next->data != val){
		temp = temp->next;
	}
	if(temp == NULL){
		return;
	}
	LL* toDel = temp->next;
	temp->next = temp->next->next;
	delete toDel;
}

LL* reverseRec(LL *head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    LL* newHead = reverseRec(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

void display(LL* head){
    while(head){
        cout << head->data <<" ";
        head = head->next;
    }
    cout << endl;
}
bool search(LL* head, int key){
    while(head){
        if(head->data == key){
            return true;
        }
        head = head->next;
    }
    return false;
}

int main(){
    LL* head = NULL;
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtStart(head, 22);
    insert(head, 67,3);
    insert(head, 27,3);
    display(head);
    LL* newHead = reverseRec(head);
    display(newHead);

    return 0;
}
