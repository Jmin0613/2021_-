// BinaryNode.h : 이진트리를 위한 노드 클래스
#include <cstdio>
class BinaryNode
{
protected:
	int data; //트리에 저장할 데이터
	BinaryNode* left; //왼쪽 자식 노드의 포인터
	BinaryNode* right; //오른쪽 자식 노드의 포인터

public:
	BinaryNode(int val = 0, BinaryNode* l = NULL, BinaryNode* r = NULL) //생성자. 디폴트 매개변수 사용
		:data(val), left(l), right(r) {}
	//데이터 멤버 설정하는 함수
	void setData(int val) { data = val; }
	void setLeft(BinaryNode* l) { left = l; }
	void setRight(BinaryNode* r) { right = r; }
	//데이터 멤버 반환하는 함수
	int getData() { return data; }
	BinaryNode* getLeft() { return left; }
	BinaryNode* getRight() { return right; }
	bool isLeaf() { return left == NULL && right == NULL; } //단말노드인지 검사, 왼쪽과 오른쪽 모두 없어야함
};