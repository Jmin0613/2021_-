#include <cstdio>
#define MAX_VTXS	256 //표현 가능한 최대 정점의 개수

class AdjMatGraph {
protected : 
	int size; //정점의 개수
	char vertices[MAX_VTXS]; //정점의 이름
	int adj[MAX_VTXS]; //인접 행렬

public :
	AdjMatGraph() { reset(); }
	char getVertex(int i) { return vertices[i]; }
	int getEdge(int i, int j) { return adj[i][j]; }
	void setEdge(int i, int j, int val) { adj[i][j] = val; }

	bool isEmpty() { return size == 0; }
	bool isFull() { return size >= MAX_VTXS; }

	//그래프 초기화 ==> 공백 상태의 그래프
	void reset() {
		size = 0;
		for (int i = 0; i < MAX_VTXS; i++)
			for (int j = 0; j < MAX_VTXS; j++)
				setEdge(i, j, 0);
	}

	//정점 삽입 연산
	void insertVertex(char name) {
		if (!isFull()) vertices[size++] = name;
		else printf("Error : 그래프 정점 개수 초과 \n");
	}

	//간선 삽입 연상 : 무방향 그래프의 경우
	void insertEdge(int u, int v) {
		setEdge(u, v, 1);
		setEdge(v, u, 1); //방향 그래프에서는 삭제 (<u,v>만 존재)
	}

	//무작위 그래프
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

	//그래프 정보 출력
	void display(FILE* fp = stdout) {
		fprintf(fp, "%d\n", size); //정점의 개수 출력
		for (int i = 0; i < size; i++) { //각 행의 정보 출력
			fprintf(fp, "%d\n", size); //정점의 이름 출력
			for (int j = 0; j < size; j++) //간선 정보 추력
				fprintf(fp, " 3%d", getEdge(i, j));
			fprintf(fp, "\n");
		}
	}

	//파일 입력 함수
	void load(char* filename) {
		FILE* fp = fopen(filename, "r");
		if (fp != NULL) {
			int n;
			fscanf(fp, "%d", &n); //정점의 전체 개수
			for (int i = 0; i < n; i++) {
				char str[80];
				fscanf(fp, "%s", str); //정점의 이름
				insertVertex(str[0]); //정점 삽입
				
				for (int j = 0; j < n; j++) {
					int val;
					fscanf(fp, "%d", &val); //간선 정보
					if (val != 0) //간선이 있으면
						insertEdge(i,j) //간선 삽입
				}
			}
			fclose(fp);
		}
	}

	//파일 저장 함수
	void store(char* filename) {
		FILE* fp = fopen(filename, "w");
		if (fp != NULL) {
			display(fp);
			fclose(fp);
		}
	}
};