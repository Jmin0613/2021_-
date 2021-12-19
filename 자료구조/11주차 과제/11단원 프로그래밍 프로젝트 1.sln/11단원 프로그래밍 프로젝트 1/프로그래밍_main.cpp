#include "ConnectedComponentGraph.h"
void main() {
	ConnectedComponentGraph g;
	
	int numVtx, numEdge;

	printf("������ ���� : ");
	cin >> numVtx;
	printf("������ ���� : ");
	cin >> numEdge;
	
	g.randomGraph(numVtx, numEdge);
	printf("�׷��� ���\n");
	g.display();
	g.store("graph.txt");
	printf("\n");
	printf("���� ���� �׽�Ʈ �׷���\n");
	g.resetVisited();
	g.findConnectedComponent();
	
	return 0;
}