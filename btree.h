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

	bool find(int value){
		return this->root->find(value);
	};

	void remove(int value){
		// TODO
        //only remove leafs
        if(find(value)){
            Node* tmp = this->root->find(value);
            iterator itmp = begin();

//            find value's parent
            while(itmp.getNode()->childLeft != tmp and itmp.getNode()->childRight != tmp)
                ++itmp;
            if(itmp.getNode()->childLeft==tmp)
                itmp.getNode()->childLeft = nullptr;
            else if(itmp.getNode()->childRight==tmp)
                itmp.getNode()->childRight = nullptr;

//            delete node that holds value
            if(!(tmp->childLeft) and !(tmp->childRight))
                delete tmp;
        }
		nodes--;
	};

	void print(){
		iterator it=begin();
		while(it!=this->end()){
            std::cout<<*it<<" ";
			++it;
		}
		std::cout<<(*(end()));
		std::cout<<std::endl;
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

