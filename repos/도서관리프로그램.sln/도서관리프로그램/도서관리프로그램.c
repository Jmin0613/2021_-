#include <Stdio.h>
#pragma warning(disable:7773)
#pragma warning(disable:4996)
int add_book(char(*book_name)[30], char(*auth_name)[30],
	char(*publ_name)[30], int* borrowed, int* num_total_book);
int search_book(char(*book_name)[30], char(*auth_name)[30],
	char(*publ_name)[30], int num_total_book);
int compare(char* str1, char* str2);
int borrow_book(int* borrowed);
int return_book(int* borrowed);

int main() {
	char user_choise; //������ ������ �޴�
	int num_total_book = 0; //���� å�� ��

	/*���� å, ����, ���ǻ縦 ������ �迭 ����, å�� �ִ� ������ 100��*/
	char book_name[100][30], auth_name[100][30], publ_name[100][30];
	/*���ȴ��� ���¸� ǥ��*/
	int borrowed[100];

	while (1) {
		printf("���� ���� ���α׷�\n");
		printf("�޴��� �����ϼ���\n");
		printf("1. å�� ���� �߰��ϱ�\n");
		printf("2. å�� �˻��ϱ�\n");
		printf("3. å�� ������\n");
		printf("4. å�� �ݳ��ϱ�\n");
		printf("5. ���α׷� ����\n");

		printf("����� ������: ");
		scanf("%s", &user_choise);
		if (user_choise == 1) {
			/*å�� ���� �߰��ϴ� �Լ� ȣ��*/
			add_book(book_name, auth_name, publ_name, borrowed, &num_total_book);
		}
		else if (user_choise == 2) {
			/*å�� �˻��ϴ� �Լ� ȣ��*/
			search_book(book_name, auth_name, publ_name, num_total_book);
		}
		else if (user_choise == 3) {
			/*å�� �񸮴� �Լ� ȣ��*/
			borrow_book(borrowed);
		}
		else if (user_choise == 4) {
			/*å�� �ݳ��ϴ� �Լ� ȣ��*/
			return_book(borrowed);
		}
		else if (user_choise == 5) {
			/*���α׷��� ��ȿ�Ѵ�*/
			break;
		}
	}

	return 0;
}

int add_book(char (*book_name)[30], char (*auth_name)[30],
	char (*publ_name)[30],int *borrowed, int *num_total_book) {
	printf("�߰��� å�� ����: ");
	scanf_s("%s", book_name[*num_total_book]);

	printf("�߰��� å�� ����: ");
	scanf_s("%s", auth_name[*num_total_book]);

	printf("�߰��� å�� ���ǻ�: ");
	scanf_s("%s", publ_name[*num_total_book]);

	borrowed[*num_total_book] = 0; //�������� ����
	printf("�߰� �Ϸ�! \n");
	(*num_total_book)++;

	return 0;
}

int search_book(char(*book_name)[30], char(*auth_name)[30],
	char(*publ_name)[30], int num_total_book) {
	int user_input; /*������� �Է��� �޴´�*/
	int i;
	char user_search[30];

	printf("��� ������ �˻� �� ���ΰ���?\n");
	printf("1. å ���� �˻�\n");
	printf("2. ������ �˻�\n");
	printf("3. ���ǻ� �˻�\n");
	scanf_s("%d", &user_input);

	printf("�˻��� �ܾ �Է��� �ּ���: ");
	scanf_s("%s", user_search);

	printf("�˻� ���\n");

	if (user_input == 1) {
		/* i�� 0 ���� num_total_book���� ���鼭 ������ å ������ ����ڰ� �Է��� �˻���� ���ϰ� �ִ�. */
		for (i = 0; i < num_total_book; i++) {
			if (compare(book_name[i], user_search)) {
				printf("��ȣ: %d // å �̸�: %s // ������: %s // ���ǻ�: %s \n",
					i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}
	else if (user_input == 2) {
		/* i�� 0���� num_total_book���� ���鼭 ������ ������ �̸��� ����ڰ� �Է��� �˻���� ���ϰ� �ִ�. */
		for (i = 0; i < num_total_book; i++) {
			if (compare(auth_name[i], user_search)) {
				printf("��ȣ: %d // å �̸�: %s // ������: %s // ���ǻ�: %s \n",
					i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}
	else if (user_input == 3) {
		/* i�� 0���� num_total_book���� ���鼭 ������ ���ǻ縦 ����ڰ� �Է��� �˻���� ���ϰ� �ִ�. */
		for (i = 0; i < num_total_book; i++) {
			if (compare(publ_name[i], user_search[i])) {
				printf("��ȣ: %d // å �̸�: %s // ������: %s // ���ǻ�: %s \n",
					i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}

	return 0;
}

int compare(char* str1, char* str2) {
	while (*str1) {
		if (*str1 != *str2) {
			return 0;
		}

		str1++;
		str2++;
	}

	if (*str2 == '\0') return 1;

	return 0;
}

int borrow_book(int* borrowed) {
	/*����ڷ� ���� å��ȣ�� ���� ����*/
	int book_num;

	printf("���� å�� ��ȣ�� �����ּ���\n");
	printf("å ��ȣ: ");
	printf("%d", &book_num);

	if (borrowed[book_num] == 1) {
		printf("�̹� ����� å�Դϴ�! \n");
	}
	else {
		printf("å�� ���������� ����Ǿ����ϴ�. \n");
		borrowed[book_num] = 1;
	}

	return 0;
}

int return_book(int* borrowed) {
	/*�ݳ��� å�� ��ȣ*/
	int num_book;
	
	printf("�ݳ��� å�� ��ȣ�� ���ּ��� \n");
	printf("å ��ȣ: ");
	scanf_s("%d", &num_book);

	if (borrowed[num_book] == 0) {
		printf("�̹� �ݳ��Ǿ� �ִ� �����Դϴ� \n");
	}
	else {
		printf("���������� �ݳ��Ǿ����ϴ� \n");
	}

	return 0;
}