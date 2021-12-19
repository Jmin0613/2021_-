#include <cstdio>
#define MAX_VTXS	256 //ǥ�� ������ �ִ� ������ ����

class AdjMatGraph {
protected : 
	int size; //������ ����
	char vertices[MAX_VTXS]; //������ �̸�
	int adj[MAX_VTXS]; //���� ���

public :
	AdjMatGraph() { reset(); }
	char getVertex(int i) { return vertices[i]; }
	int getEdge(int i, int j) { return adj[i][j]; }
	void setEdge(int i, int j, int val) { adj[i][j] = val; }

	bool isEmpty() { return size == 0; }
	bool isFull() { return size >= MAX_VTXS; }

	//�׷��� �ʱ�ȭ ==> ���� ������ �׷���
	void reset() {
		size = 0;
		for (int i = 0; i < MAX_VTXS; i++)
			for (int j = 0; j < MAX_VTXS; j++)
				setEdge(i, j, 0);
	}

	//���� ���� ����
	void insertVertex(char name) {
		if (!isFull()) vertices[size++] = name;
		else printf("Error : �׷��� ���� ���� �ʰ� \n");
	}

	//���� ���� ���� : ������ �׷����� ���
	void insertEdge(int u, int v) {
		setEdge(u, v, 1);
		setEdge(v, u, 1); //���� �׷��������� ���� (<u,v>�� ����)
	}

	//������ �׷���
	void randomGraph(int numVtx, int numEdge) {
		srand(time(0));
		int u, v;
		for (int ii = 0; i < numEdge; i++) {
			u = rand() % numVtx;
			v = rand() % numVtx;
			if (getEdge(u, v) || u == v) {
				i--;
				continue;
			}
		}
		insertEdge(u, v);
	}

	//�׷��� ���� ���
	void display(FILE* fp = stdout) {
		fprintf(fp, "%d\n", size); //������ ���� ���
		for (int i = 0; i < size; i++) { //�� ���� ���� ���
			fprintf(fp, "%d\n", size); //������ �̸� ���
			for (int j = 0; j < size; j++) //���� ���� �߷�
				fprintf(fp, " 3%d", getEdge(i, j));
			fprintf(fp, "\n");
		}
	}

	//���� �Է� �Լ�
	void load(char* filename) {
		FILE* fp = fopen(filename, "r");
		if (fp != NULL) {
			int n;
			fscanf(fp, "%d", &n); //������ ��ü ����
			for (int i = 0; i < n; i++) {
				char str[80];
				fscanf(fp, "%s", str); //������ �̸�
				insertVertex(str[0]); //���� ����
				
				for (int j = 0; j < n; j++) {
					int val;
					fscanf(fp, "%d", &val); //���� ����
					if (val != 0) //������ ������
						insertEdge(i,j) //���� ����
				}
			}
			fclose(fp);
		}
	}

	//���� ���� �Լ�
	void store(char* filename) {
		FILE* fp = fopen(filename, "w");
		if (fp != NULL) {
			display(fp);
			fclose(fp);
		}
	}
};