// BinaryTree.h : 이진트리 클래스
#include "BinaryNode.h"
class BinaryTree
{
	//BinaryNode* root; //데이터 멤버로는 루트노드에 대한 포인터만 있으면 됨
public:
	BinaryNode* root; //데이터 멤버로는 루트노드에 대한 포인터만 있으면 됨

	BinaryTree() : root(NULL) {}// 생성자. 새로운 트리 생성 시 루트는 NULL이 되어야 함
	void setRoot(BinaryNode* node) { root = node; }
	BinaryNode* getRoot() { return root; }
	bool isEmpty() { return root = NULL; } //root가 null이면 공백 트리

	//이진트리의 순회 연산 -> 이진트리의 순회연산은 각각 두개의 함수로 이루어짐(중복함수)
	
	//이진트리 inorder 순회 연산 (중위순회)
	void inorder() { printf("\n inorder: "), inorder(root); } //inorder() -> 외부에서 호출되는 중위순회의 인터페이스
	void inorder(BinaryNode* node) { //순환적인 트리의 순회 함수, inorder(BinaryNode* node) -> 순환호출을 통해 실제로 모든 노드 방문
		if (node != NULL) {
			inorder(node->getLeft()); //왼쪽 서브트리 처리
			printf(" [%c] ", node->getData()); //현재 노드 처리
			inorder(node->getRight()); //오른쪽 서브트리 처리
		}
	}
	//이진트리 preorder 순회 연산 (전위순회)
	void preorder() { printf("\n preorder: "), preorder(root); }
	void preorder(BinaryNode* node) {
		if (node != NULL) {
			printf(" [%c] ", node->getData());
			preorder(node->getLeft());
			preorder(node->getRight());
		}
	}

	//이진트리 postorder 순회 연산 (후위순회)
	void postorder() { printf("\n postorder: "), postorder(root); }
	void postorder(BinaryNode* node) {
		if (node != NULL) {
			postorder(node->getLeft());
			postorder(node->getRight());
			printf(" [%c] ", node->getData());
		}
	}

	//이진트리의 추가 연산 

	//이진트리에서 노드 개수 구하는 멤버 함수
	int getCount() { return isEmpty ? 0 : getCount(root); } //외부인터페이스를 위한 함수
	int getCount(BinaryNode* node) { //순환호출에 의해 node를 루트로 하는 서브트리의 노드 수 계산 함수
		if (node == NULL) return 0; //공백트리인 경우
		return 1 + getCount(node->getLeft()) + getCount(node->getRight()); //공백트리가 아닌 경우
	}

	//이진트리의 단말 노드 개수 구하는 멤버 함수
	int getLeafCount() { return isEmpty() ? 0 : getLeafCount(root); } //인터페이스를 위한 함수
	int getLeafCount(BinaryNode* node) { //순환호출에 의해 node를 루트로 하는 서브트리의 단말 노드 수 계산 함수
		if (node == NULL) return 0; //node가 null이면 공백트리이므로 0을 반환
		if (node->isLeaf())return 1; //단말노드면 1을 반환
		else return getLeafCount(node->getLeft()) + getLeafCount(node->getRight());
		//단말아니면 (왼쪽서브트리 단말노드 + 오른쪽서브트리 단말노드)을 반환
	}

	//이진트리의 높이를 구하는 멤버 함수
	int getHeight() { return isEmpty() ? 0 : getHeight(root); } //인터페이스를 위한 함수
	int getHeight(BinaryNode* node) {
		if (node == NULL) return 0; //node가 null이면 공백트리이므로 0을 반환
		int hLeft = getHeight(node->getLeft());
		int hRight = getHeight(node->getRight());
		return (hLeft > hRight ? hLeft + 1 : hRight + 1); //더 큰 값을 선택하고 1을 더한 값을 반환
	}
};