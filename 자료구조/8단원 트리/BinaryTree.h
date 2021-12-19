// BinaryTree.h : ����Ʈ�� Ŭ����
#include "BinaryNode.h"
class BinaryTree
{
	//BinaryNode* root; //������ ����δ� ��Ʈ��忡 ���� �����͸� ������ ��
public:
	BinaryNode* root; //������ ����δ� ��Ʈ��忡 ���� �����͸� ������ ��

	BinaryTree() : root(NULL) {}// ������. ���ο� Ʈ�� ���� �� ��Ʈ�� NULL�� �Ǿ�� ��
	void setRoot(BinaryNode* node) { root = node; }
	BinaryNode* getRoot() { return root; }
	bool isEmpty() { return root = NULL; } //root�� null�̸� ���� Ʈ��

	//����Ʈ���� ��ȸ ���� -> ����Ʈ���� ��ȸ������ ���� �ΰ��� �Լ��� �̷����(�ߺ��Լ�)
	
	//����Ʈ�� inorder ��ȸ ���� (������ȸ)
	void inorder() { printf("\n inorder: "), inorder(root); } //inorder() -> �ܺο��� ȣ��Ǵ� ������ȸ�� �������̽�
	void inorder(BinaryNode* node) { //��ȯ���� Ʈ���� ��ȸ �Լ�, inorder(BinaryNode* node) -> ��ȯȣ���� ���� ������ ��� ��� �湮
		if (node != NULL) {
			inorder(node->getLeft()); //���� ����Ʈ�� ó��
			printf(" [%c] ", node->getData()); //���� ��� ó��
			inorder(node->getRight()); //������ ����Ʈ�� ó��
		}
	}
	//����Ʈ�� preorder ��ȸ ���� (������ȸ)
	void preorder() { printf("\n preorder: "), preorder(root); }
	void preorder(BinaryNode* node) {
		if (node != NULL) {
			printf(" [%c] ", node->getData());
			preorder(node->getLeft());
			preorder(node->getRight());
		}
	}

	//����Ʈ�� postorder ��ȸ ���� (������ȸ)
	void postorder() { printf("\n postorder: "), postorder(root); }
	void postorder(BinaryNode* node) {
		if (node != NULL) {
			postorder(node->getLeft());
			postorder(node->getRight());
			printf(" [%c] ", node->getData());
		}
	}

	//����Ʈ���� �߰� ���� 

	//����Ʈ������ ��� ���� ���ϴ� ��� �Լ�
	int getCount() { return isEmpty ? 0 : getCount(root); } //�ܺ��������̽��� ���� �Լ�
	int getCount(BinaryNode* node) { //��ȯȣ�⿡ ���� node�� ��Ʈ�� �ϴ� ����Ʈ���� ��� �� ��� �Լ�
		if (node == NULL) return 0; //����Ʈ���� ���
		return 1 + getCount(node->getLeft()) + getCount(node->getRight()); //����Ʈ���� �ƴ� ���
	}

	//����Ʈ���� �ܸ� ��� ���� ���ϴ� ��� �Լ�
	int getLeafCount() { return isEmpty() ? 0 : getLeafCount(root); } //�������̽��� ���� �Լ�
	int getLeafCount(BinaryNode* node) { //��ȯȣ�⿡ ���� node�� ��Ʈ�� �ϴ� ����Ʈ���� �ܸ� ��� �� ��� �Լ�
		if (node == NULL) return 0; //node�� null�̸� ����Ʈ���̹Ƿ� 0�� ��ȯ
		if (node->isLeaf())return 1; //�ܸ����� 1�� ��ȯ
		else return getLeafCount(node->getLeft()) + getLeafCount(node->getRight());
		//�ܸ��ƴϸ� (���ʼ���Ʈ�� �ܸ���� + �����ʼ���Ʈ�� �ܸ����)�� ��ȯ
	}

	//����Ʈ���� ���̸� ���ϴ� ��� �Լ�
	int getHeight() { return isEmpty() ? 0 : getHeight(root); } //�������̽��� ���� �Լ�
	int getHeight(BinaryNode* node) {
		if (node == NULL) return 0; //node�� null�̸� ����Ʈ���̹Ƿ� 0�� ��ȯ
		int hLeft = getHeight(node->getLeft());
		int hRight = getHeight(node->getRight());
		return (hLeft > hRight ? hLeft + 1 : hRight + 1); //�� ū ���� �����ϰ� 1�� ���� ���� ��ȯ
	}
};