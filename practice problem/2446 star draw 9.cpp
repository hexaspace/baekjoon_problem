//baekjoon 2446 star draw -9
/*
ù° �ٿ� N(1 �� N �� 100)�� �־�����.
ù° �ٺ��� 2��N-1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
�𷡽ð� ����̸�
�� �ٿ��� Ȧ������ ���� ������.
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
		star = (input - i) * 2 - 1;	//�� ���� ���� ���� : (n ~ 1)*2-1 ������ ���� �� 1��
		for (j = 0; j < i; ++j) {	//�� ���� ���� : 0 ~ (n-1)
			printf(" ");
		}
		for (j = 0; j < star; ++j) {
			printf("*");
		}
		printf("\n");			//�� �� �Է� �� �ٹٲ�
	}
	for (i = input - 2; i >= 0; --i) {	//(n-2) ~ 0  / n-1��° ���� ��1���� ���� for������ �Էµ�.
		star = (input - i) * 2 - 1;		//�� ���� ���� ���� : (2 ~ n)*2-1 ó�� ���� �� 3��
		for (j = 0; j < i; ++j) {		//�� ���� ���� : 0 ~ (n-1)
			printf(" ");
		}
		for (j = 0; j < star; ++j) {
			printf("*");
		}
		printf("\n");					//�� �� �Է� �� �ٹٲ�
	}
	return 0;
}