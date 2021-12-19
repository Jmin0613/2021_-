#include "ConnectedComponentGraph.h"
void main() {
	ConnectedComponentGraph g;
	
	int numVtx, numEdge;

	printf("정점의 개수 : ");
	cin >> numVtx;
	printf("간선의 개수 : ");
	cin >> numEdge;
	
	g.randomGraph(numVtx, numEdge);
	printf("그래프 출력\n");
	g.display();
	g.store("graph.txt");
	printf("\n");
	printf("연결 성분 테스트 그래프\n");
	g.resetVisited();
	g.findConnectedComponent();
	
	return 0;
}