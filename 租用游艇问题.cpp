////����������������ͧ���ֲ��ڳ�����������n����ͧ����վ1��2��....��n���οͿ�����Щ��ͧ����վ������ͧ���������ε��κ�һ����ͧ����վ�黹��ͧ����ͧ����վi����ͧ����վj֮������Ϊr(i, j)��1 <= i <= j <= n�������һ���㷨�����㷨����ͧ����վ1����ͧ����վn���������
////
////�㷨��ƣ����ڸ�������ͧ����վi����ͧ����վj֮������Ϊr(i, j)��1 <= i <= j <= n�����������ͧ����վ1����ͧ����վn���������
//#include <iostream>
//#include <climits>
//
//using namespace std;
//
//// �ӽṹ��
//// ����r���ɡ�
//// r[i][j] = min( r[i][k] + r[k][j])
//
//int main()
//{
//	int r[201][201] = { 0 }; // direct cost
//	int n;
//
//	// inputs
//	cin >> n;
//	for (int i = 1; i <= n - 1; ++i)
//	{
//		for (int j = i + 1; j <= n; ++j)
//		{
//			cin >> r[i][j];
//		}
//	}
//
//	// r[i][j] = min( r[i][k] + r[k][j])
//	for (int step = 2; step <= n - 1; ++step)
//	{
//		for (int i = 1; i + step <= n; ++i)
//		{
//			int j = i + step; // �Խ��߱������
//			int minVal = INT_MAX;
//			for (int k = i; k <= j; ++k) // Ѱ��k
//			{
//				if (r[i][k] + r[k][j] < minVal)
//					minVal = r[i][k] + r[k][j];
//			}
//			r[i][j] = minVal;
//		}
//	}
//
//	cout << r[1][n] << endl;
//	
//	return 0;
//}