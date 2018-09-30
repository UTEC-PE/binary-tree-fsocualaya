#include <iostream>

struct Node{
	int data;
    Node* childLeft;
    Node* childRight;

	Node(int data){
		this->data = data;
	}

	void insert(int value){
		if(value < this->data){
			if(!(this->childLeft))
				this->childLeft = new Node(value);
			else
				this->childLeft->insert(value);
		}
		else if(value > this->data){
			if(!(this->childRight))
				this->childRight = new Node(value);
			else
				this->childRight->insert(value);
		}
	}

	void remove(){
        //TODO


	}

    Node* search(int value){
        if(this->data==value)
            return this;
        else if(this->data>value) {
            if (this->childLeft)
                this->childLeft->search(value);
            else
                return nullptr;
        }
        else if(this->data<value) {
            if (this->childRight)
                this->childLeft->search(value);
            else
                return nullptr;
        }
    }

    //Lazy way to print tree
	void print(){
		if(this->childLeft)
			this->childLeft->print();
			
		std::cout<<this->data<<" ";

		if(this->childRight)
			this->childRight->print();
		
		}
};