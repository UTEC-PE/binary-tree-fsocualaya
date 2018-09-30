#include <iostream>

struct Node{
	int data;
	Node* childRight;
	Node* childLeft;
	
public:

	Node(int data){
		this->data = data;
	}

	void insert(int value){
		if(value <= this->data){
			if(!(this->childLeft))
				this->childLeft = new Node(value);
			else
				this->childLeft->insert(value);
		}
		else{
			if(!(this->childRight))
				this->childRight = new Node(value);
			else
				this->childRight->insert(value);
		}
	}

	void remove(){

	}

	void print(){
		if(this->childLeft)
			this->childLeft->print();
			
		std::cout<<this->data<<" ";

		if(this->childRight)
			this->childRight->print();
		
		}

};