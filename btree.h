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
		if(!(this->root))
			this->root = new Node(value);
		else
			this->root->insert(value);
		nodes++;
	};

	bool search(int value){
		return this->root->search(value);
	};

	void remove(int value){
		// TODO
		nodes--;
	};

	void print(){
		iterator it=begin();
		while(it!=this->end()){
			std::cout<<*it<<" ";
			++it;
		}
		std::cout<<(*(end()));
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

	iterator begin() {
		Node *tmp = this->root;
		std::stack<Node *> aStack;
		aStack.push(tmp);
		while(tmp->childLeft){
			aStack.push(tmp);
			tmp = tmp->childLeft;
		}
		return iterator(tmp,aStack);
	};

	iterator end(){
		Node*  tmp = root;
		std::stack<Node*> aStack;
		while(tmp->childRight) {
            aStack.push(tmp);
            tmp = tmp->childRight;
        }
        return iterator(tmp,aStack);
	}
};

