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
//    double duration; //걸린 시간
//
//    int n, result[3];
//
//    cout << "n 입력: ";
//
//    cin >> n;
//
//    start = clock();
//
//    result[0] = sumAlgorithmA(n);
//
//    end = clock();
//
//    cout << "알고리즘 A 결과: " << result[0] << endl;
//
//    duration = (double)(end - start) / CLOCKS_PER_SEC;
//
//    cout << "알고리즘 A를 수행하는데 걸린 시간: " << duration << endl << endl;
//
//    start = clock();
//
//    result[1] = sumAlgorithmB(n);
//
//    end = clock();
//
//    cout << "알고리즘 B 결과: " << result[1] << endl;
//
//    duration = (double)(end - starkt) / CLOCKS_PER_SEC;
//
//    cout << "알고리즘 B를 수행하는데 걸린 시간: " << duration << endl << endl;
//
//    start = clock();
//
//    result[2] = sumAlgorithmC(n);
//
//    end = clock();
//
//    cout << "알고리즘 C 결과: " << result[2] << endl;
//
//    duration = (double)(end - start) / CLOCKS_PER_SEC;
//
//    cout << "알고리즘 C를 수행하는데 걸린 시간: " << duration << endl << endl;
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