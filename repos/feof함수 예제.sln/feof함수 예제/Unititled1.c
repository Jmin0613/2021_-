#include <stdio.h>
#pragma warning(disable: 4996)
int main(void)
{
	int state;
	char a;

	//�����͸� �б� ���� ��Ʈ�� ����
	FILE* fp = fopen("mystory.txt", "rt");
	/* fopen�Լ��� �����߻��� NULL�� �����ϹǷ�
	���� ���� �� �����߻��� ���α׷��� ���� */
	if (fp == NULL) {
		printf("��Ʈ�� ������ ���� �߻�");
		return 1;
	}

	/* ���Ͽ� ���� �����Ͱ� �ִ��� �𸥴ٰ� ����
	���ѷ����� ���鼭 ��� �����͸� ���
	������ ���������ϸ� feof�Լ��� ���� �ݺ��� Ż��*/
	while (1) {
		if (feof(fp) != 0) {
			printf("������ ���� ���� \n");
			break;
		}
		//�ѱ��ھ� ������ ���
		a = fgetc(fp);
		printf("%c", a);
	}

	/* fclose�Լ��� ����� ������ �߻��ϸ�
	0�� �ƴ� �ٸ����� �����ϹǷ� ������ ����� �ǴܵǸ�
	�ȳ� �� ���α׷��� ����*/
	state = fclose(fp);
	if (state != 0) {
		printf("��Ʈ�� ���Ž� �����߻�");
		return 1;
	}
	return 0;
}