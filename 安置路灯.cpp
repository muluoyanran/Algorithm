////СQ���ڸ�һ������Ϊn�ĵ�·���·�ư��÷�����
////
////Ϊ�����������, СQ�ѵ�·��Ϊn������, ��Ҫ�����ĵط���'.'��ʾ, ����Ҫ�������ϰ��������'X'��ʾ��
////
////СQ����Ҫ�ڵ�·������һЩ·��, ���ڰ�����posλ�õ�·��, ��յ·�ƿ�������pos - 1, pos, pos + 1������λ�á�
////
////СQϣ���ܰ��þ����ٵ�·����������'.'����, ϣ�����ܰ�������һ��������Ҫ����յ·�ơ�
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//// ...XX....XX
//
//int main()
//{
//	int t; // num of test cases, [1,1000]
//	cin >> t;
//
//	int n;        // length of current road
//	char c[1000]; // '.' or 'x'
//	int idx;      // current position to analysis
//	int count;    // count of lights
//	for (int ii = 0; ii < t; ++ii)
//	{
//		cin >> n;
//		for (int i = 0; i < n; ++i)
//			cin >> c[i];
//		// init
//		idx = 0;
//		count = 0;
//
//		while (idx < n)
//		{
//			if (c[idx] == 'X')
//				++idx;
//			else // c[idx] == '.'
//			{
//				if (idx >= n-1)
//				{
//					idx += 2;
//					++count;
//				}
//				else
//				{
//					idx += 3;
//					++count;
//				}
//			}
//		}
//		cout << count << endl;
//	}
//}