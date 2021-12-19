// BinaryNode.h : ����Ʈ���� ���� ��� Ŭ����
#include <cstdio>
class BinaryNode
{
protected:
	int data; //Ʈ���� ������ ������
	BinaryNode* left; //���� �ڽ� ����� ������
	BinaryNode* right; //������ �ڽ� ����� ������

public:
	BinaryNode(int val = 0, BinaryNode* l = NULL, BinaryNode* r = NULL) //������. ����Ʈ �Ű����� ���
		:data(val), left(l), right(r) {}
	//������ ��� �����ϴ� �Լ�
	void setData(int val) { data = val; }
	void setLeft(BinaryNode* l) { left = l; }
	void setRight(BinaryNode* r) { right = r; }
	//������ ��� ��ȯ�ϴ� �Լ�
	int getData() { return data; }
	BinaryNode* getLeft() { return left; }
	BinaryNode* getRight() { return right; }
	bool isLeaf() { return left == NULL && right == NULL; } //�ܸ�������� �˻�, ���ʰ� ������ ��� �������
};