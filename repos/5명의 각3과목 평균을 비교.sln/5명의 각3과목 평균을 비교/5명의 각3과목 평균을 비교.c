#include <stdio.h>
/*
5명의 국영수 점수 입력받아서 배열로 저장 (ok)
각자 3과목의 평균구하고, (ok)
그 평균끼리 비교해서 높은 사람부터 출력. (ok)
그 중, 평균이상은 합격 미만은 불합격 출력
*/
int main() {
	int arr[5][3]; //5명의 각 3과목씩 입력할 배열 선언 
	printf("각 학생들의 성적 입력 진행 \n");

	int i, j;
	for (i = 0; i < 5; i++) { //5명의 3과목 성적 입력 진행 
		printf("%d번째 학생의 성적 입력, 국어-수학-영어 순서로 입력하세요\n, i+1");
		for (j = 0; j < 3; j++) {
			scanf_s("%d", &arr[i][j]);
		} printf("\n");
	}
	int ave_score[5]; //각 5명의 평균을 저장하기 위한 배열 
	ave_personal(arr, ave_score); //5명의 각 3과목 평균을 구하기 
	 
	for (i = 0; i < 5; i++) {
		printf("%d번째, %d", i + 1, ave_score[i]);
	}

}
int ave_personal(int arr1[][3], int arr2[]) { //각 5명의 평균 구하고 arr2에 저장하기 
	int i, j, sum = 0;
	for (i = 0; i < 5; i++) { //sum에 3과목의 점수를 저장하고 3으로 나누어 arr2에 저장하기 
		for (j = 0; j < 3; j++) {
			sum += arr1[i][j];
		}
		sum = sum / 3;
		arr2[i] = sum;
	}
}