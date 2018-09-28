#include "node.h"

class btree{
public:
	Node* root;
	int nodes = 0;

public:
	btree(){
		this->root = nullptr;
	};

	btree(int value){
		this->root = new Node(value);
	}

	void insert(int value){
		//TODO
		if(!(this->root))
			this->root = new Node(value);
		else
			this->root->insert(value);
		nodes++;
	};

	void remove(int value){
		// TODO
		nodes--;
	};

	void print(){
		// TODO
	};

	int getRoot(){
		return this->root->data;
	};

	int size(){
		return this->nodes;
	};

	int height(){
		//TODO
	};
};