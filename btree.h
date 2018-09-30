// #include "node.h"
#include "iterator.h"

class btree{
private:
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
		this->root->print();
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

	iterator begin(){
		Node* tmp = root;
		while(tmp->childLeft)
			tmp = tmp->childLeft;
		return iterator(tmp);
	};

	iterator end(){
		Node*  tmp = root;
		while(tmp->childRight)
			tmp = tmp->childRight;
		return iterator(tmp);
	}
};

