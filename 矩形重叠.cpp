////��Ҫ֪��ĳ���غ������ڶ��ٸ������ڣ�����ת��Ϊ��������غ���������½��ڶ��ٸ������ڡ�
////��������ѭ�������������غ�������ܵ����½ǣ������ѭ������������½��ڶ��ٸ������ڡ���
////���㷨���Ա�֤һ���������ȷ�������Ҳ���˺ܶ�����������е�������������˼��
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, x1[50], x2[50], y1[50], y2[50];
//	cin >> n;
//	for (int i = 0; i < n; ++i)
//		cin >> x1[i];
//	for (int i = 0; i < n; ++i)
//		cin >> y1[i];
//	for (int i = 0; i < n; ++i)
//		cin >> x2[i];
//	for (int i = 0; i < n; ++i)
//		cin >> y2[i];
//
//	int cnt = 0, ans = 0;
//	for (int x : x1)
//		for (int y : y1)
//		{
//			cnt = 0;
//			for (int i = 0; i < n; ++i)
//			{
//				if (x >= x1[i] && x < x2[i] && y >= y1[i] && y < y2[i])
//					++cnt;
//			}
//			if (cnt > ans)
//				ans = cnt;
//		}
//	cout << ans;
//	return 0;
//}
