#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int level;
int arrayFish[6];
int* cursor; //arrayFish를 가리키면서 몇번 물고기에게 물을 줄지

void initData();
void printFishes();
void decreasWater(long elapsedTime);
int checkFishAlive();

int main() {
	long startTime = 0; //게임 시작 시간
	long totalElapsedTime = 0; //총 경과 시간
	long prevElapsedTime = 0; //직전 경과 시간 (최든에 물을 준 시간 간격)

	int num; //몇 번 어항에 물을 줄 것인지, 사용자 입력
	initData();

	cursor = arrayFish; //cursor[0]...sursor[1]...

	startTime = clock(); //현재 시간을 milisecond (1000분의 1초) 단위로 반환
	while (1) {
		printFishes();
		printf("몇 번 어항에 물을 주시겠습니까? ");
		scanf_s("%d", &num);

		//입력값 체크
		if (num < 1 || num > 6) {
			printf("입력값이 잘못되었습니다.\n");
			continue;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간: %ld 초\n", totalElapsedTime);

		//직전 물 준 시간(마지막으로 물 준 시간) 이후로 흐른 시간
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간: %ld 초\n", prevElapsedTime);

		//어항의 물을 감소 (증발)
		decreasWater(prevElapsedTime);

		//사용자가 입력한 어항에 물을 준다
		//1. 어항의 물이 0 이면? 물을 주지 않는다...이미 물고기 죽음.
		if (cursor[num - 1] <= 0) {
			printf("%d번 물고기는 이미 죽었습니다. 물을 주지 않습니다.\n", num);
		}
		//2. 어항의 물이 0이 아닌 경우? 물을 준다 ! 100을 넘지 않는지 체크
		//현재 어항의 물 +1 <= 100
		else if (cursor[num - 1] + 1 <= 100) {
			//물을 준다
			printf("%d 번 어항에 물을 줍니다\n", num);
			cursor[num - 1] += 1;
		}

		// 레벨업을 할 건지 확인(레벨업은 20초마다 한번씩 수행)
		if (totalElapsedTime / 20 > level - 1) {
			//레벨업
			level++; ///level: 1 -> level: 2 -> level: 3 ...
			printf("+++축 레벨업! 기존 %d레벨에서 %d레벨로 업그레이드 +++\n\n", level - 1, level);

			//최종 레벨 : 5
			if (level == 5) {
				printf("\n\n축하합니다. 최고 레벨을 달성하였습니다. 게임을 종료합니다.\n\n");
				exit(0);
			}
		}

		//모든 물고기가 죽었는지 확인
		if (checkFishAlive() == 0) {
			//모두 죽음
			printf("모든 물고기가 죽었습니다.\n");
				exit(0);
		}
		else {
			//최소 한마리 살아있음
			printf("물고기가 아직 살아있습니다.\n");
		}
		prevElapsedTime = totalElapsedTime;

		//10초 -> 15초 (5초: prevElapsedTime -> 15초) -> 25초 (10초...?)
	}

	return 0;
}

void initData() {
	level = 1; //게임 레벨(1~5)
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100; //어항의 물 높이 (0~100)
	}
}

void printFishes() {
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf(" %4d ", arrayFish[i]);
	}printf("\n\n");
}

void decreasWater(long elapsedTime) {
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3 * (int)elapsedTime); //난이도 조절을 위한 값
		if (arrayFish[i] < 0) {
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive() {
	for (int i = 0; i < 6; i++) {
		if (arrayFish[i] > 0)
			return 1; //참 true
	}
	return 0;
}