//1�� �����ϰ� �ڱ⺸�� �������� ���������� �Ҽ�x
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int i, j;
	int cnt = 0;
	int arr[1000];
	int k = 1, p;

	for (i = 1; i < 1000; i++) {
		for (j = 2; j < i; j++) {
			if ((i % j) == 0) { //�ڽź��� ���� ���ڷ� ������������
				break;
			}
		}
		if (i == j) { //�迭�� ���� �� ī��Ʈ
			arr[k] = i;
			k++;
			cnt += 1;
		}
	}

	for (p = 1; p < k; p++) {
		cout << arr[p] << "  ";

		if (p % 10 == 0) { //����ϸ� ���ٿ� 10ĭ�� ��Ÿ����? �𸣰ھ arr[0]�� 0���� ���ΰ� arr[1]���� �Ҵ��� �� ���
			cout << endl;
		}
	}cout << endl;

	cout << "�Ҽ��� ���� : " << cnt << endl;

	return 0;
}