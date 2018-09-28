struct Node{
	int data;
	struct Node* childLeft;
	struct Node* childRight;
	
public:
	Node(int data){
		this->data = data;
	};

	void insert(int value){
		if(value <= this->data){
			if(!(this->childLeft))
				this->childLeft = new Node(value);
			else
				this->childLeft->insert(value);
		}
		else{
			if(!(this->childRight))
				this->childRight = new Node(value);
			else
				this->childRight->insert(value);
		}
	};

	void remove(){

	};

	void print(){

	};
};