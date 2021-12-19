ClosestPair(S)
입력: x-좌표의 오름차순으로 정렬된 배열 S // 단, 각 점은 (x,y)로 표현된다.
출력: S에 있는 점들 중 최근접 점의 쌍의 거리
if(i<=S) return (2 또는 3개의 점들 사이의 최근접 쌍) // 3개 이하일 경우, 분할 X
정렬된 S를 같은 크기의 S1과 S2로 분할한다. 단 |S|가 홀수이면, S1이 1 더 많게 분할한다.
CP1 = ClosestPair(S1) // CP1은 S1에서의 최근접 점의 쌍
CP2 = ClosestPair(S2) // CP2는 S2에서의 최근접 점의 쌍
d = min{dist(CP1), dist(CP2)}일 때, 중간 영역에 속하는 점들 중에서 최근접 점의 쌍을 찾아서 이를 CPc라고 한다.
단, dist()는 두 점 사이의 거리이다.
return (CP1, CP2, CPc 중에거 거리가 가장 짧은 쌍)
[출처] 최근접 점의쌍 찾기(Closest Pair)|작성자 집밥
