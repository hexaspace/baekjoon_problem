//baekjook 2920 ���� ����
/*
�������� c d e f g a b C, �� 8�� ������ �̷�����ִ�. �� �������� 8�� ���� ������ ���� ���ڷ� �ٲپ� ǥ���Ѵ�. c�� 1��, d�� 2��, ..., C�� 8�� �ٲ۴�.

1���� 8���� ���ʴ�� �����Ѵٸ� ascending, 8���� 1���� ���ʴ�� �����Ѵٸ� descending, �� �� �ƴ϶�� mixed �̴�.

������ ������ �־����� ��, �̰��� ascending����, descending����, �ƴϸ� mixed���� �Ǻ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
ù° �ٿ� 8�� ���ڰ� �־�����. �� ���ڴ� ���� ������ ������ ���̸�, 1���� 8���� ���ڰ� �� ���� �����Ѵ�.
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
	int input[8] = { 0, };	//�Է¹��� ���8�� 0���� �ʱ�ȭ
	int isa = 0;
	int isde = 0;
	int i;
	for (i = 0; i < 8; ++i) {	//8�� �ԷµǴ°����� �������ִ�.
		scanf("%d", &input[i]);	//���� ������ ������ �Էµȴ�.
		if (input[i] == i + 1) {	//ascending���� Ȯ��
			isa++;
		}
		if (input[i] == 8 - i) {	//descending���� Ȯ��
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
		printf("mixed\n");	//�Ѵ� 8����� �������� �ʴ´ٸ� mixed�̴�.
	}
	return 0;

}