#include "node.h"
#include <stack>

class iterator{
// private:
public:
	Node* current;
	std::stack<Node*> theStack;

public:
	iterator(){
		current = nullptr;
	}

	iterator(Node* current):current(current){}

	bool operator!=(iterator other){
		return current!=other.current;
	}

	iterator operator++(){
		if(current->childRight){
			current = current->childRight;
			theStack.push(current);
			while(current->childLeft)
				current = current->childLeft;
				theStack.push(current);
		}
		else
			current = theStack.top();
		return *this;
	}
	
};