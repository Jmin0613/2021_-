#include <cstdio>

class Node {
	Node* link;//다음 노드를 가리키는 포인터 변수
	int data; //노드의 데이터 필드
public :
	Node(int val = 0) : data(val), link(NULL) {}
	Node* getLink() { return link; }
	void setLink(Node* next) { link = next; }
	void display() { printf(" <%2d>", data); }
	bool hasData(int val) { return data == val; }

	//자신의 다음에 새로운 노드 n 삽입하는 함수
	void insertNext(Node* n) {
		if (n != NULL) {
			n->link = link;
			link = n;
		}
	}

	Node* removeNext() {
		Node* removed = link;
		if (removed != NULL)
			link = removed->link;

		return removed;
	}
};