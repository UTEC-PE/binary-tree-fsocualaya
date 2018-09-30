#include "node.h"
#include <stack>

class iterator{
 private:
	Node* current;
	std::stack<Node*> theStack;

public:
	iterator(){
		current = nullptr;
	}

    iterator(Node* current, std::stack<Node*> someStack){
	    this->current = current;
	    theStack = someStack;
	}

	bool operator!=(iterator other){
		return current!=other.current;
	}

	iterator operator++(){
	    theStack.pop();
		if(current->childRight){
			current = current->childRight;
			theStack.push(current);
			while(current->childLeft){
				current = current->childLeft;
				theStack.push(current);
			}
		}
		else
			current = theStack.top();
		return *this;
	}
	
	int operator*(){
		return this->current->data;
	}

};