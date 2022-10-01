#include <stdio.h>
#include <iostream>
using namespace std;


struct node{
	
	int coef;
	int grado;
	node *next;
	
	node *head = NULL;
	
	
	void insert(int coef,int grado){
		node *new_node = new node();
		new_node->coef=coef;
		new_node->grado=grado;
		
		if(head != NULL){
			new_node->next=head;
			head=new_node;
		}
			
	}
		
	void print(){
		
		node *x = this->head;
			
		while(x!=NULL){
			cout<<x->coef<<"x"<<x->grado;
			x=x->next;
		}
		cout<<endl;
	}
};





int main(int argc, char *argv[]) {
	
	node *nodo1;
	nodo1 = new node() ;
	
	nodo1->next;
	nodo1->insert(1,2);
	nodo1->insert(2,4);
	nodo1->print();
	
	
	delete nodo1;
	
	return 0;
}

