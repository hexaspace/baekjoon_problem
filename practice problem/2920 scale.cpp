//baekjook 2920 음계 문제
/*
다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다. 이 문제에서 8개 음은 다음과 같이 숫자로 바꾸어 표현한다. c는 1로, d는 2로, ..., C를 8로 바꾼다.

1부터 8까지 차례대로 연주한다면 ascending, 8부터 1까지 차례대로 연주한다면 descending, 둘 다 아니라면 mixed 이다.

연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.
첫째 줄에 8개 숫자가 주어진다. 이 숫자는 문제 설명에서 설명한 음이며, 1부터 8까지 숫자가 한 번씩 등장한다.
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
	int input[8] = { 0, };	//입력받을 행렬8을 0으로 초기화
	int isa = 0;
	int isde = 0;
	int i;
	for (i = 0; i < 8; ++i) {	//8번 입력되는것으로 정해저있다.
		scanf("%d", &input[i]);	//띄어쓰기 단위로 정수가 입력된다.
		if (input[i] == i + 1) {	//ascending인지 확인
			isa++;
		}
		if (input[i] == 8 - i) {	//descending인지 확인
			isde++;
		}
	}
	if (isa == 8) {
		printf("ascending\n");
	}
	else if (isde == 8) {
		printf("descending\n");
	}
	else {
		printf("mixed\n");	//둘다 8번모두 만족하지 않는다면 mixed이다.
	}
	return 0;

}