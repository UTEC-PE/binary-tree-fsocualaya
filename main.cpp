#include "btree.h"
using namespace std;
int main(){

	btree t;
	t.insert(5);
	t.insert(4);
	t.insert(8);
	t.insert(12);
	t.insert(13);
	t.insert(18);
	t.insert(36);
	t.insert(14);
	t.insert(19);

	// std::cout<<t.getRoot();
	// std::cout<<endl;
	// std::cout<<t.root->childLeft->data;
	// std::cout<<endl;
	// std::cout<<t.root->childRight->data;
	// std::cout<<endl;
	// std::cout<<t.root->childRight->childRight->data;
	// std::cout<<endl;
	// std::cout<<t.root->childLeft->childLeft->data;
	// std::cout<<endl;
	t.print();
	// cout<<"\n"<<t.size();
	// cout<<t.begin().current->data;
	cout<<"\n";
	
	cout<<cout<<t.begin().current->data;	
	return 0;
}
