////��һ��Բ�βٳ������ܰڷ���n ��ʯ�ӡ���Ҫ��ʯ���д���غϲ���һ�ѡ��涨ÿ��ֻ��ѡ���ڵ�2 ��ʯ�Ӻϲ����µ�һ�ѣ������µ�һ��ʯ������Ϊ�ôκϲ��ĵ÷֡������һ���㷨���������n��ʯ�Ӻϲ���һ�ѵ���С�÷ֺ����÷֡�
//
//#include <iostream>
//#include <climits>
//using namespace std;
//
//// �ӽṹ
//// ʹ��a[n]��ÿһ��ʯ�ӵĸ���
//// ʹ��M[i][j]���i���Լ���j�Ѳ��������÷�
//// ʹ��m[i][j]���i���Լ���j�Ѳ�������С�÷�
//// M[i][j] = max( M[i][k] + M[(i+k+1)%n][j-k-1] + sum(a[i:j])
//// m[i][j] = min( m[i][k] + m[(i+k+1)%n][j-k-1] + sum(a[i:i+j] )
//int sum(int a[], int i, int j, int n);
//
//int main()
//{
//	int a[100];
//	int M[100][100];
//	int m[100][100];
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> a[i];
//		M[i][0] = m[i][0] = 0;
//	}
//
//	// M[i][j] = max( M[i][k] + M[(i+k+1)%n][j-k-1] + sum(a[i:i+j] )
//	// m[i][j] = min( m[i][k] + m[(i+k+1)%n][j-k-1] + sum(a[i:i+j] )
//	for (int j = 1; j <= n - 1; ++j)
//	{
//		for (int i = 0; i <= n - 1; ++i)
//		{
//			int max = 0;
//			int min = INT_MAX;
//			for (int k = 0; k <= j - 1; ++k)
//			{
//				int big = M[i][k] + M[(i + k + 1) % n][j - k - 1] + sum(a, i, j, n);
//				int small = m[i][k] + m[(i + k + 1) % n][j - k - 1] + sum(a, i, j, n);
//				if (big > max)
//					max = big;
//				if (small < min)
//					min = small;
//			}
//			M[i][j] = max;
//			m[i][j] = min;
//		}
//	}
//
//	int Max = 0;
//	int Min = INT_MAX;
//	for (int i = 0; i <= n - 1; ++i) 
//	{
//		if (M[i][n - 1] > Max)	Max = M[i][n - 1];
//		if (m[i][n - 1] < Min)	Min = m[i][n - 1];
//	}
//
//	cout << Min << endl << Max << endl;
//
//	return 0;
//}
//
//
//int sum(int a[], int i, int j, int n)
//{
//	int retVal = 0;
//	for (int t = 0; t <= j; ++t)
//	{
//		retVal += a[(i+t)%n];
//	}
//	return retVal;
//}