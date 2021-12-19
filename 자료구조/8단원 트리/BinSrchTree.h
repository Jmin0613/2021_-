#include "BinaryTree.h"
class BinSrchTree :public BinaryTree
{
public:
	BinSrchTree(void) {}
	~BinSrchTree(void) {}

	//이진 탐색 트리의 탐색 연산
	BinaryNode* searchRecur(int key) {}
	BinaryNode* searchRecur(BinaryNode* n, int key) { //n을 루트로 하는 서브트리에서 키 값이 key인 노드를 찾아 반환하는 함수
		if (n == NULL) return NULL; //n이 null인 경우, x탐색실패로 null반환
		if (key == n->getData()) // (1)key == 현재노드의 data 
			return n;
		else if (key < n->getData()) // (2)key < 현재노드의 data
			return searchRecur(n->getLeft(), key);
		else // (2)key > 현재의 data
			return searchRecur(n->getRight(), key);
	}

	//이진 탐색 트리의 삽입 연산
	void insertRecur(BinaryNode*n){}
	void insertRecur(BinaryNode* r, BinaryNode* n){ //노드 r을 루트로하는 섭트리에 노드n을 삽입하는 함수
		if (n->getData() == r->getData()) //(1) 노드n키값 == 루트노드r키값
			return; // 키값이 같음 -> 중복된 트리가 이미 안에 존재 -> 삽입x
		else if (n->getData() < r->getData()) { //(2) 노드n키값 < 루트노드r키값
			if (r->getLeft() == NULL) //만약 왼쪽 자식 노드 없으면
				r->setLeft(n); // 노드n을 왼쪽 자식노드로 삽입
			else
				insertRecur(r->getLeft(), n); //만약 왼쪽 자식 있으면, inset함수 순환호출한 값을 삽입
		}
		else { //(3) 노드n키값 > 루트노드r키값
			if (r->getData() == NULL) //만약 오른쪽 자식 노드 없으면
				r->setRight(n); // 노드n을 오른쪽 자식노드로 삽입
			else
				insertRecur(r->getRight(), n); //만약 오른쪽 자식 있으면, insert함수 순환호출한 값을 삽입
		}
	}

	//이진 탐색 트리의 삭제 연산
	void remove(int data){}
	void remove(BinaryNode* parent, BinaryNode* node) {
		// case 1 : 삭제하려는 노드가 단말노드인 경우
		if (node->isLeaf()) {
			if (parent == NULL) // node == root인 경우 -> 공백상태가 됨
				root = NULL;
			else { // 아닌 경우 ->parent이 해당 자식을 null
				if (parent->getLeft() == node)
					parent->setLeft(NULL);
				else
					parent->setRight(NULL);
			}
		}
		// case 2 : 삭제하려는 노드가 왼쪽이나 오른쪽 자식만 갖는 경우
		else if (node->getLeft() == NULL || node->getRight() == NULL) {
			//삭제할 노드의 유일한 자식노드 -> child
			BinaryNode* child = (node->getLeft() != NULL) ? node->getLeft() : node->getRight();
			//삭제할 노드가 루트이먄 -> child가 새로운 root됨
			if (node == root)
				root = child;
			//아니면 부모노드의 자식으로 자식 노드 child를 직접 연결
			else {
				if (parent->getLeft() == node)
					parent->setLeft(child);
				else
					parent->setRight(child);
			}
			
		}
		// case 3 :삭제하려는 노드가 두개의 자식이 모두 있는 경우
		else {
			// 삭제하려는 노드의 오른쪽 서브트리에서 가장 작은 노드 탐색 (왼쪽 가장 큰값해도 됨)
			// succ -> 후계노드 : 오른쪽 서브트리에서 가장 key가 작은 노드
			// succp -> 후계노드의 부모노드
			BinaryNode* succp = node;
			BinaryNode* succ = node->getRight();
			while (succ->getLeft() != NULL) { // 후계 노드 탐색
				succp = succ; //후계노드이 부모노드
				succ = succ->getLeft(); //후계노드
			}
			// 후계노드의 부모와 후계노드의 오른쪽 자식을 직접 연결
			if (succp->getLeft() == succ)
				succp->setLeft(succ->getRight());
			else //후계노드가 삭제할 노드의 바로 오른쪽 자식인 경우
				succp->setRight(succ->getRight());
			// 후계 노드 정보를 삭제할 노드에서 복사
			node->setData(succ->getData());
			// 삭제할 노드를 후계 노드로 변경 : 실제로는 후계 노드가 제거됨
			node = succ;
		}
		delete node; //메모리 동적 해제
	}
};