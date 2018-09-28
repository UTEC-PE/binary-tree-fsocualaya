#include "btree.h"
#include <iostream>
using namespace std;
int main(){

	btree t;
	t.insert(5);
	t.insert(4);
	t.insert(8);
	t.insert(12);
	std::cout<<t.getRoot();
	std::cout<<endl;
	std::cout<<t.root->childLeft->data;
	std::cout<<endl;
	std::cout<<t.root->childRight->data;
	std::cout<<endl;
	std::cout<<t.root->childRight->childRight->data;
	std::cout<<endl;
	// std::cout<<t.root->childLeft->childLeft->data;
	// std::cout<<endl;	
	return 0;
}
