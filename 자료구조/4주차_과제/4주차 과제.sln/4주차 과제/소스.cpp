//#include <iostream>
//
//#include <ctime>
//
//#include <cstdlib>
//
//using namespace std;
//
//
//
//int sumAlgorithmA(int n);
//
//int sumAlgorithmB(int n);
//
//int sumAlgorithmC(int n);
//
//
//
//int main(void)
//
//{
//
//    clock_t start, end;
//
//    double duration; //�ɸ� �ð�
//
//    int n, result[3];
//
//    cout << "n �Է�: ";
//
//    cin >> n;
//
//    start = clock();
//
//    result[0] = sumAlgorithmA(n);
//
//    end = clock();
//
//    cout << "�˰��� A ���: " << result[0] << endl;
//
//    duration = (double)(end - start) / CLOCKS_PER_SEC;
//
//    cout << "�˰��� A�� �����ϴµ� �ɸ� �ð�: " << duration << endl << endl;
//
//    start = clock();
//
//    result[1] = sumAlgorithmB(n);
//
//    end = clock();
//
//    cout << "�˰��� B ���: " << result[1] << endl;
//
//    duration = (double)(end - starkt) / CLOCKS_PER_SEC;
//
//    cout << "�˰��� B�� �����ϴµ� �ɸ� �ð�: " << duration << endl << endl;
//
//    start = clock();
//
//    result[2] = sumAlgorithmC(n);
//
//    end = clock();
//
//    cout << "�˰��� C ���: " << result[2] << endl;
//
//    duration = (double)(end - start) / CLOCKS_PER_SEC;
//
//    cout << "�˰��� C�� �����ϴµ� �ɸ� �ð�: " << duration << endl << endl;
//
//    return 0;
//
//}
//
//
//
//int sumAlgorithmA(int n)
//
//{
//
//    return ((n) * (n + 1)) / 2;
//
//}
//
//
//
//int sumAlgorithmB(int n)
//
//{
//
//    int sum = 0;
//
//    for (int i = 1; i <= n; i++)
//
//        sum += i;
//
//    return sum;
//
//}
//
//
//
//int sumAlgorithmC(int n)
//
//{
//
//    int sum = 0;
//
//    for (int i = 1; i <= n; i++)
//
//        for (int j = 0; j < i; j++)
//
//            sum += 1;
//
//    return sum;
//
//
//
//}