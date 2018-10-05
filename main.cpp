#include "btree.h"
using namespace std;
int main(){

	btree t(5);
	t.insert(5);
	t.insert(4);
	t.insert(8);
	t.insert(12);
	t.insert(13);
	t.insert(18);
	t.insert(36);
	t.insert(14);
	t.insert(19);

	t.print();
	cout<<t.find(8)<<endl;
    t.remove(19);
	t.remove(5); // Falla, reviste probar más casos
		// Dónde probaste tu iterator?
    t.print();
	return 0;
}
