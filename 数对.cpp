////x��y��������n, ����x����y���������ڵ���k��
//
////��������:
////�����������������n, k(1 <= n <= 10 ^ 5, 0 <= k <= n - 1)��
////������� :
////����ÿ����������, ���һ����������ʾ���ܵ�����������
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	// x, y <= n
//	// x % y >= k
//
//	unsigned long long cnt = 0;
//
//	if (k == 0)
//	{
//		cnt = n * n;
//	}
//	else
//	{
//		int base, offset;
//
//		for (int y = k + 1; y <= n; ++y)
//		{
//			base = (n / y) * (y - k);
//			offset = (n % y >= k) ? (n % y - k + 1) : 0;
//			cnt += base + offset;
//		}
//	}
//	cout << cnt;
//}