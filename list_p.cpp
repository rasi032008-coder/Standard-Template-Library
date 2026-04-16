#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node* prev;

	Node(){
		next = NULL;
		prev = NULL;
	}
	~Node(){
		delete next;
		delete prev;
	}
};

class list{
	Node* head;
	Node* tail;
public:
	list(){
		head = NULL;
		tail = NULL;
	}


	void push_back(int k){

		Node *p = new Node;
		p->data = k;
		

		if(head==NULL){
			head = p;
			tail = p;
			return;
		}
		Node *itr=head;
		while(itr->next!=NULL){
				itr=itr->next;
		}

			itr->next = p;
			p->prev = itr;
	}

	void display(){
		Node *itr=head;
		while(itr != NULL){
			cout << itr->data << " ";
			itr = itr->next;
		}

		cout << endl;
	}	


	void reverse_display(){
		Node *itr = tail;
		while(itr != NULL){
			cout << itr->data << " ";
			itr = itr->prev;
		}
		
				cout << endl;
	}
};

int main(){
	list l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);

	l.display();
}
