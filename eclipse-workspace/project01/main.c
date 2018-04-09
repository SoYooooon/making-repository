#include<stdio.h>
#include<malloc.h>

int main() {
	int size; // 수열의 크기
	int* input; // 입력된 수열 공간
	int* temp; // 임시 공간
	int max; // 가장 큰 합
	int i; // for 문 index
	// 수열의 크기 입력
	scanf("%d", &size);
	// 수열의 크기만큼 배열 공간 할당
	input = (int *)malloc(sizeof(int)*size);
	temp = (int *)malloc(sizeof(int)*size);
	// 수열의 값들을 입력
	for (i = 0; i < size; i++) {
		scanf("%d", &input[i]);
		temp[i] = input[i];
	}
	// 가장 큰 합 1번째 수로 초기화
	max = input[0];
	// 2번째 수부터 조사 시작
	for (i = 1; i < size; i++) {
		if (input[i] <= temp[i-1]+input[i]) {
			temp[i] = temp[i - 1] + input[i];
		}
		if (max < temp[i]) {
			max = temp[i];
		}
	}
	printf("%d\n", max);
	return 0;
}
