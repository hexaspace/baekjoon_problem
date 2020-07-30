//hexaspace code
//baekjoon 2447 star draw -10
/*
재귀적인 패턴으로 별을 찍어 보자. N이 3의 거듭제곱(3, 9, 27, ...)이라고 할 때, 크기 N의 패턴은 N×N 정사각형 모양이다.

크기 3의 패턴은 가운데에 공백이 있고, 가운데를 제외한 모든 칸에 별이 하나씩 있는 패턴이다.

***
* *
***
N이 3보다 클 경우, 크기 N의 패턴은 공백으로 채워진 가운데의 (N/3)×(N/3) 정사각형을 크기 N/3의 패턴으로 둘러싼 형태이다. 예를 들어 크기 27의 패턴은 예제 출력 1과 같다.

첫째 줄에 N이 주어진다. N은 3의 거듭제곱이다. 즉 어떤 정수 k에 대해 N=3k이며, 이때 1 ≤ k < 8이다.

첫째 줄부터 N번째 줄까지 별을 출력한다.
*********
* ** ** *
*********
***   ***
* *   * *
***   ***
*********
* ** ** *
*********
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char table[2188][2188];	//별을 입력할 표, 최대 입력값인 3^7=2187이다.
void squarestar(int n, int y, int x) {
	int i, j;
	if (n == 1) {		//가장 마지막인 n=1일때 해당좌표에 *를 찍는다.
		table[y][x] = '*';
		return;
	}
	for (i = 0; i < 3; ++i) {		//(n/3)의 크기로 9등분을 한 사각형에서
		for (j = 0; j < 3; ++j) {
			if (i != 1 || j != 1) {	// 정중앙(i=1,j=1)만 제외하고 재귀함수를 부른다.
				squarestar(n / 3, i*n / 3 + y, j*n / 3 + x);	//각 좌표는 기존 좌표[x(or y)]+9등분에서 위치하는 값[(n/3)*i(or j)]
			}
		}
	}
	return;
}
int main() {
	int input, i, j;
	scanf("%d", &input);	//정수 입력값
	//초기화
	for (i = 0; i < input; ++i) {
		for (j = 0; j < input; ++j) {
			table[i][j] = ' ';	//char 배열을 ' '로 초기화하여 *만 찍도록 한다.
		}
	}
	//별 찍기
	squarestar(input, 0, 0);	//한 변의 길이가 input으로 시작하여 재귀함수를 부른다. 
	//출력
	for (i = 0; i < input; ++i) {
		for (j = 0; j < input; ++j) {
			printf("%c", table[i][j]);	
		}
		printf("\n");	//한줄이 끝날 때 줄바꿈
	}
	return 0;
}