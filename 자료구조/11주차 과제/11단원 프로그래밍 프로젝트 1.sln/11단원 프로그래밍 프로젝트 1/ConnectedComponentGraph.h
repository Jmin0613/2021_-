#include "SrchAMGraph.h"
class ConnectedComponentGraph : public SrchAMGraph {
private :
	int label[MAX_VTXS]; //������ ���� �ʵ� �߰�

public : //���� �켱 Ž��
	void labelDFS(int v, int color) {
		visited[v] = true; //���� ������ �湮��
		label[v] = color; //���� ������ ����
		for (int w = 0; w < size; w++)
			if (isLinked(v, w) && visited[w] == false)
				labelDFS(w, color);
	}

	//�׷����� ���� ���� ���� �Լ�
	void findConnectedComponent() {
		int count = 0; //���� ������ ��
		for (int i = 0; i < size; i++) //�湮���� �ʾ�����
			if (visited[i] == false)
				labelDFS(i, ++count);
		print("�׷��� ���Ἲ�� ���� == %d \n", count);
		for (int i = 0; i < size; i++)
			print("%c = %d ", getVertex(i), label[i]);
		print("\n");
	}
};