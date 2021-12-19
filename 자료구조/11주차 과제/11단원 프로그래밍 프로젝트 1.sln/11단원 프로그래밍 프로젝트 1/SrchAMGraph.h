#include "AdListGraph.h"
#include "CircularQueue.h"

class SrchAMGraph : public AdjMatGraph {
private :
	bool visited[MAX_VTXS]; //정점 방문 정보

public :
	void resetVisited() { //모든 정점을 방문하지 않았다고 설정
		for (int i = 0; i < size; i++)
			visited[i] = false;
	}
	bool isLinked(int u, int v) { return getEdge(u, v) != 0; }

	//깊이 우선 탐색 함수
	void DFS(int v) {
		visited[v] = true; //현재 정점을 방문함
		printf("%c ", getVertex(v)); //정점의 이름 출력

		for (int w = 0; w < size; w++)
			if (isLinked(v, w) && visited[w] == false)
				DFS(w); //연결 + 방문x => 순환호출로 방문
	}

	//인접 행렬로 표현된 그래프에 대한 너비우선탐색 연산
	void BFS(int v) {
		visited[v] = true; //현재 정점을 방문함
		printf("%c ", getVertex(v)); //정점의 이름 출력

		CircularQueue que;
		que.enqueue(v); //시작 정점을 큐에 저장

		while (!que.isEmpty()) {
			int v = que.dequeue(); //큐에 정점 추출
			for (int w=0;w<size;w++) //인접 정점 탐색
				if (isLinked(v, w) && visited[w] == false) {
					visited[w] = true; //방문 표시
					printf("%c ", getVerTex(w)); //정점의 이름 출력
					que.enqueue(w); //방문한 정점을 큐에 저장
				}
		}
	}
};