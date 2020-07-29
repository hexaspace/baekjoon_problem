//baekjoon 2446 star draw -9
/*
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
모래시계 모양이며
각 줄에는 홀수개의 별로 찍힌다.
ex *****   n=3
	***
	 *
	***
   *****
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
	int input = 0;
	int i = 0;
	int j = 0;
	int star = 0;
	scanf("%d", &input);
	for (i = 0; i < input; ++i) {	//0 ~ (n-1)
		star = (input - i) * 2 - 1;	//각 줄의 별의 갯수 : (n ~ 1)*2-1 마지막 줄은 별 1개
		for (j = 0; j < i; ++j) {	//각 줄의 공백 : 0 ~ (n-1)
			printf(" ");
		}
		for (j = 0; j < star; ++j) {
			printf("*");
		}
		printf("\n");			//각 줄 입력 후 줄바꿈
	}
	for (i = input - 2; i >= 0; --i) {	//(n-2) ~ 0  / n-1번째 줄인 별1개는 위의 for문에서 입력됨.
		star = (input - i) * 2 - 1;		//각 줄의 별의 갯수 : (2 ~ n)*2-1 처음 줄은 별 3개
		for (j = 0; j < i; ++j) {		//각 줄의 공백 : 0 ~ (n-1)
			printf(" ");
		}
		for (j = 0; j < star; ++j) {
			printf("*");
		}
		printf("\n");					//각 줄 입력 후 줄바꿈
	}
	return 0;
}