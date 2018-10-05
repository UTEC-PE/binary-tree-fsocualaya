#include "node.h"
#include <stack>

class Iterator{
 private:
	Node* current;
	std::stack<Node*> theStack;

public:
	Iterator(){
		current = nullptr;
	}

    Iterator(Node* current, std::stack<Node*> someStack){
	    this->current = current;
	    theStack = someStack;
	}

	bool operator!=(Iterator other){
		return current!=other.current;
	}

	Iterator operator++(){
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

	Node* getNode(){
	    return this->current;
	}
};