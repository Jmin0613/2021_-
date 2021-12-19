#include "BinaryTree.h"
class BinSrchTree :public BinaryTree
{
public:
	BinSrchTree(void) {}
	~BinSrchTree(void) {}

	//���� Ž�� Ʈ���� Ž�� ����
	BinaryNode* searchRecur(int key) {}
	BinaryNode* searchRecur(BinaryNode* n, int key) { //n�� ��Ʈ�� �ϴ� ����Ʈ������ Ű ���� key�� ��带 ã�� ��ȯ�ϴ� �Լ�
		if (n == NULL) return NULL; //n�� null�� ���, xŽ�����з� null��ȯ
		if (key == n->getData()) // (1)key == �������� data 
			return n;
		else if (key < n->getData()) // (2)key < �������� data
			return searchRecur(n->getLeft(), key);
		else // (2)key > ������ data
			return searchRecur(n->getRight(), key);
	}

	//���� Ž�� Ʈ���� ���� ����
	void insertRecur(BinaryNode*n){}
	void insertRecur(BinaryNode* r, BinaryNode* n){ //��� r�� ��Ʈ���ϴ� ��Ʈ���� ���n�� �����ϴ� �Լ�
		if (n->getData() == r->getData()) //(1) ���nŰ�� == ��Ʈ���rŰ��
			return; // Ű���� ���� -> �ߺ��� Ʈ���� �̹� �ȿ� ���� -> ����x
		else if (n->getData() < r->getData()) { //(2) ���nŰ�� < ��Ʈ���rŰ��
			if (r->getLeft() == NULL) //���� ���� �ڽ� ��� ������
				r->setLeft(n); // ���n�� ���� �ڽĳ��� ����
			else
				insertRecur(r->getLeft(), n); //���� ���� �ڽ� ������, inset�Լ� ��ȯȣ���� ���� ����
		}
		else { //(3) ���nŰ�� > ��Ʈ���rŰ��
			if (r->getData() == NULL) //���� ������ �ڽ� ��� ������
				r->setRight(n); // ���n�� ������ �ڽĳ��� ����
			else
				insertRecur(r->getRight(), n); //���� ������ �ڽ� ������, insert�Լ� ��ȯȣ���� ���� ����
		}
	}

	//���� Ž�� Ʈ���� ���� ����
	void remove(int data){}
	void remove(BinaryNode* parent, BinaryNode* node) {
		// case 1 : �����Ϸ��� ��尡 �ܸ������ ���
		if (node->isLeaf()) {
			if (parent == NULL) // node == root�� ��� -> ������°� ��
				root = NULL;
			else { // �ƴ� ��� ->parent�� �ش� �ڽ��� null
				if (parent->getLeft() == node)
					parent->setLeft(NULL);
				else
					parent->setRight(NULL);
			}
		}
		// case 2 : �����Ϸ��� ��尡 �����̳� ������ �ڽĸ� ���� ���
		else if (node->getLeft() == NULL || node->getRight() == NULL) {
			//������ ����� ������ �ڽĳ�� -> child
			BinaryNode* child = (node->getLeft() != NULL) ? node->getLeft() : node->getRight();
			//������ ��尡 ��Ʈ�̐� -> child�� ���ο� root��
			if (node == root)
				root = child;
			//�ƴϸ� �θ����� �ڽ����� �ڽ� ��� child�� ���� ����
			else {
				if (parent->getLeft() == node)
					parent->setLeft(child);
				else
					parent->setRight(child);
			}
			
		}
		// case 3 :�����Ϸ��� ��尡 �ΰ��� �ڽ��� ��� �ִ� ���
		else {
			// �����Ϸ��� ����� ������ ����Ʈ������ ���� ���� ��� Ž�� (���� ���� ū���ص� ��)
			// succ -> �İ��� : ������ ����Ʈ������ ���� key�� ���� ���
			// succp -> �İ����� �θ���
			BinaryNode* succp = node;
			BinaryNode* succ = node->getRight();
			while (succ->getLeft() != NULL) { // �İ� ��� Ž��
				succp = succ; //�İ����� �θ���
				succ = succ->getLeft(); //�İ���
			}
			// �İ����� �θ�� �İ����� ������ �ڽ��� ���� ����
			if (succp->getLeft() == succ)
				succp->setLeft(succ->getRight());
			else //�İ��尡 ������ ����� �ٷ� ������ �ڽ��� ���
				succp->setRight(succ->getRight());
			// �İ� ��� ������ ������ ��忡�� ����
			node->setData(succ->getData());
			// ������ ��带 �İ� ���� ���� : �����δ� �İ� ��尡 ���ŵ�
			node = succ;
		}
		delete node; //�޸� ���� ����
	}
};