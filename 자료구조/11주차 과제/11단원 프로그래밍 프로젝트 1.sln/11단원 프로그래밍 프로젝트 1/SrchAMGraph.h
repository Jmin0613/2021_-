#include "AdListGraph.h"
#include "CircularQueue.h"

class SrchAMGraph : public AdjMatGraph {
private :
	bool visited[MAX_VTXS]; //���� �湮 ����

public :
	void resetVisited() { //��� ������ �湮���� �ʾҴٰ� ����
		for (int i = 0; i < size; i++)
			visited[i] = false;
	}
	bool isLinked(int u, int v) { return getEdge(u, v) != 0; }

	//���� �켱 Ž�� �Լ�
	void DFS(int v) {
		visited[v] = true; //���� ������ �湮��
		printf("%c ", getVertex(v)); //������ �̸� ���

		for (int w = 0; w < size; w++)
			if (isLinked(v, w) && visited[w] == false)
				DFS(w); //���� + �湮x => ��ȯȣ��� �湮
	}

	//���� ��ķ� ǥ���� �׷����� ���� �ʺ�켱Ž�� ����
	void BFS(int v) {
		visited[v] = true; //���� ������ �湮��
		printf("%c ", getVertex(v)); //������ �̸� ���

		CircularQueue que;
		que.enqueue(v); //���� ������ ť�� ����

		while (!que.isEmpty()) {
			int v = que.dequeue(); //ť�� ���� ����
			for (int w=0;w<size;w++) //���� ���� Ž��
				if (isLinked(v, w) && visited[w] == false) {
					visited[w] = true; //�湮 ǥ��
					printf("%c ", getVerTex(w)); //������ �̸� ���
					que.enqueue(w); //�湮�� ������ ť�� ����
				}
		}
	}
};